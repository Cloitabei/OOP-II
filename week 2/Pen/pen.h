#ifndef PEN_H
#define PEN_H

#include <string>

//!TODO: remove the ’virtual' keyword from the methods, compile,
    // run and take note of the results.
    //Answer
    //There is no difference.
    class Pen {
    std::string pen_name;
    public:
    Pen(std::string pen_name = "Pen"){
    //!TODO: remove the ’this->’ part, compile and
    // observe the results!
    this->pen_name = pen_name;
    //Result 
    // draws a line.
    //draws a circle.
    //draws a line.
    //draws a circle.
    //draws a line.
    //draws a circle.
    }
    std::string getName();
    std::string drawLine();
    std::string drawCircle();
};
#endif