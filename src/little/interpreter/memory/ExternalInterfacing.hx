package little.interpreter.memory;

import haxe.Exception;
import little.tools.Conversion;
import little.tools.Tree;
import little.interpreter.Tokens.InterpTokens;
import haxe.Constraints.Function;

class ExternalInterfacing {
	
	public var parent:Memory;
	
	/**
	    For each type registered, a pointer to the type must be provided
	**/
	public var typeToPointer:Map<String, MemoryPointer> = new Map<String, MemoryPointer>();

	/**
	    Properties of instances of a certain type.
		for example, one may want to define a `length` property on an array
	**/
	public var instanceProperties:ExtTree = new ExtTree();

	/**
	    Methods of instances of a certain type.
		for example, one may want to define a `push` method on an array
	**/
	public var instanceMethods:ExtTree = new ExtTree();

	/**
	    Global static variables, defined using a path to the property.
	**/
	public var globalProperties:ExtTree = new ExtTree();

	/**
	    Global static functions, defined using a path to the property.
	**/
	public var globalMethods:ExtTree = new ExtTree();

	public function new(memory:Memory) {
		parent = memory;
	}

	public function createPathFor(extType:ExtTree, ...path:String) {
		var identifiers = path.toArray();

		var handle = extType;
		while (identifiers.length > 0) {
			var identifier = identifiers.shift();
			if (handle.properties.exists(identifier)) {
				handle = handle.properties[identifier];
			} else {
				handle.properties[identifier] = new ExtTree();
				handle = handle.properties[identifier];
			}
		}
	}

	public function hasGlobal(...path:String):Bool {
		var identifiers = path.toArray();

		var handle = globalProperties;
		while (identifiers.length > 0) {
			var identifier = identifiers.shift();
			if (handle.properties.exists(identifier))
				handle = handle.properties[identifier];
			else
				return false;
		}

		return true;
	}

	public function getGlobal(...path:String):{objectValue:InterpTokens, objectAddress:MemoryPointer} {
		var identifiers = path.toArray();
		
		var handle = globalProperties;
		for (ident in identifiers) {
			handle = handle.properties[ident];
		}

		return handle.getter(null, null); // Static externs are not tied to any runtime object, so this makes sense
	}
}

class ExtTree {

	public var getter:(objectValue:InterpTokens, objectAddress:MemoryPointer) -> {objectValue:InterpTokens, objectAddress:MemoryPointer};

	public var properties:Map<String, ExtTree>;

	public function new(?getter:(objectValue:InterpTokens, objectAddress:MemoryPointer) -> {objectValue:InterpTokens, objectAddress:MemoryPointer}, ?properties:Map<String, ExtTree>) {
		this.getter = getter ?? (objectValue, objectAddress) -> {
			return {
				objectValue: Characters('Externally registered, attached to $objectAddress'),
				objectAddress: objectAddress
			}
		}
		this.properties = properties ?? new Map<String, ExtTree>();
	}
}