#include "pen.h"

// No need to make this ’ ’ since it is not ’overriden’
    // by derived/child/sub classes.
    std::string Pen::getName(){
    return pen_name;
    }
    std::string Pen::drawLine(){
    return getName().append(" draws a line.");
    }
    std::string Pen::drawCircle(){
    return getName().append(" draws a circle.");
    }