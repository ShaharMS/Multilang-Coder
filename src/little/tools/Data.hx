package little.tools;

import haxe.macro.Context;
import haxe.Json;
import haxe.macro.Expr;

class Data {
	static function getTypeString(t:haxe.macro.Type):String {
		return switch t {
			case TMono(t): getTypeString(t.get());
			case TEnum(t, params): t.get().name + '${if (params.length != 0) "<" else ""}' + params.map(a -> getTypeString(a)).join(",")
				+ '${if (params.length != 0) ">" else ""}';
			case TInst(t, params): t.get().name + '${if (params.length != 0) "<" else ""}' + params.map(a -> getTypeString(a)).join(",")
				+ '${if (params.length != 0) ">" else ""}';
			case TType(t, params): t.get().name + '${if (params.length != 0) "<" else ""}' + params.map(a -> getTypeString(a)).join(",")
				+ '${if (params.length != 0) ">" else ""}';
			case TFun(args, ret): args.map(a -> getTypeString(a.t)).join("->") + "->" + getTypeString(ret);
			case TAnonymous(a): Json.stringify(a);
			case TDynamic(t): "Dynamic";
			case TLazy(f): getTypeString(f());
			case TAbstract(t, params): t.get().name + '${if (params.length != 0) "<" else ""}' + params.map(a -> getTypeString(a)).join(",")
				+ '${if (params.length != 0) ">" else ""}';
			case _: "Dynamic";
		}
	}

	static function getWriteAccess(k:haxe.macro.Type.FieldKind) {
		return switch k {
			case FVar(read, write): {
					switch write {
						case AccNormal: true;
						case AccNo: false;
						case AccNever: false;
						case AccResolve: false;
						case AccCall: true;
						case AccInline: true;
						case AccRequire(r, msg): false;
						case AccCtor: false;
					}
				}
			case FMethod(kind): {
					switch kind {
						case MethDynamic: true;
						case _: false;
					}
				}
		}
	}

	public static macro function getClassInfo(e) {
		var stats:Array<haxe.macro.Expr> = [];

		switch e.expr {
			case EConst(CString(path)):
				var t:haxe.macro.Type;
				try {
					t = haxe.macro.Context.getType(path);
				} catch (_) {
					haxe.macro.Context.error(path + ' Is not a class. Did you misspell the type/package?', e.pos);
				}
				switch t {
					case TInst(inst, _): {
							var statics = inst.get().statics.get();
							var publics = inst.get().fields.get();
							var processingStatics = false;
							for (arr in [publics, statics]) {
								for (field in arr) {
									var type = field.type;
									switch type {
										case TFun(args, ret): {
												stats.push(macro {
													className: $v{path},
													name: $v{field.name},
													doc: $v{field.doc},
													parameters: $a{
														args.map(param -> macro {
															name: $v{param.name},
															type: $v{getTypeString(param.t)},
															optional: $v{param.opt}
														})
													},
													returnType: $v{getTypeString(ret)},
													fieldType: "function",
													allowWrite: $v{getWriteAccess(field.kind)},
													isStatic: $v{processingStatics}
												});
											}
										case _: {
												stats.push(macro {
													className: $v{path},
													name: $v{field.name},
													doc: $v{field.doc},
													fieldType: "var",
													parameters: [],
													returnType: $v{getTypeString(field.type)},
													allowWrite: $v{getWriteAccess(field.kind)},
													isStatic: $v{processingStatics}
												});
											}
									}
								}
								processingStatics = true;
							}

							return macro($a{stats} : Array<{
								className:String,
								name:String,
								doc:String,
								parameters:Array<{name:String, type:String, optional:Bool}>,
								returnType:String,
								fieldType:String,
								allowWrite:Bool,
								isStatic:Bool
							}>);
						}
					case _: haxe.macro.Context.error(e + 'Is not a class. Did you misspell the type/package?', e.pos);
				}
			case _:
				haxe.macro.Context.error('Expected string constant, found ${e.expr} instead', e.pos);
		}
		return macro null;
	}

	public static macro function getFunctionInfo(e, f) {
		var stats:haxe.macro.Expr;

		var type:haxe.macro.Type;
		switch e.expr {
			case EConst(CString(path)):
				{
					try {
						type = haxe.macro.Context.getType(path);
					} catch (_) {
						haxe.macro.Context.error(path + ' Is not a type. Did you misspell the type/package?', e.pos);
					}
				}
			case _:
				haxe.macro.Context.error('Expected string constant, found ${e.expr} instead', e.pos);
		}

		switch f.expr {
			case EConst(CString(func)):
				{
					switch type {
						case TInst(inst, _): {
								var statics = inst.get().statics.get();

								for (field in statics) {
									if (field.name == func) {
										var fieldType = field.type;
										switch fieldType {
											case TFun(args, ret): {
													return macro {
														className: $v{getTypeString(type)},
														name: $v{field.name},
														doc: $v{field.doc},
														fieldType: "function",
														parameters: $a{
															args.map(param -> macro {
																name: $v{param.name},
																type: $v{getTypeString(param.t)},
																optional: $v{param.opt}
															})
														},
														returnType: $v{getTypeString(field.type)},
														allowWrite: $v{getWriteAccess(field.kind)},
														isStatic: true
													}
												}
											case _:
										}
									}
								}
							}
						case _: haxe.macro.Context.error(type + ' Is not a type. Did you misspell the type/package?', f.pos);
					}
				}
			case _:
				haxe.macro.Context.error('Expected string constant, found ${f.expr} instead', f.pos);
		}

		return macro null;
	}
}
