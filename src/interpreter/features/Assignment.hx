package interpreter.features;

import interpreter.types.basic.DecimalVar;
import interpreter.types.basic.NumberVar;

/**
 * Takes care of variable assignments (x = y)
 */
class Assignment {
    
    public static function assign(parent:Dynamic, value:Dynamic) {
        if (parent is NumberVar && value is Int) {
            parent.intValue = value;
        } else if (parent is DecimalVar && (value is Int || value is Float)) {
            parent.floatValue = value;
        }
    }

}