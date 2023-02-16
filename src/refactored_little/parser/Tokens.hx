package refactored_little.parser;

enum ParserTokens {

    SetLine(line:Int);

    Define(name:String, value:ParserTokens, type:String);
    Action(name:String, params:Array<ParserTokens>, body:ParserTokens, type:String);
    Condition(name:String, exp:ParserTokens, body:ParserTokens, type:String);

    Read(name:String);
    Write(assignees:Array<String>, value:ParserTokens);
    /**
    	Useful during the initial conversion between lexer tokens and parser tokens
    **/
    Identifier(word:String);

    Expression(parts:Array<ParserTokens>, type:String);
    Block(body:Array<ParserTokens>, type:String);

    Parameter(name:String, value:ParserTokens, type:String);

    Sign(sign:String);
    Number(num:String);
    Decimal(num:String);
    Characters(string:String);

    NullValue;
    TrueValue;
    FalseValue;
}