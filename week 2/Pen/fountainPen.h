#ifndef FPEN_H
#define FPEN_H

#include "pen.h"

class FountainPen : public Pen {
    public:
    /////////////////////////////////////////////////////////////
    // //!TODO: what would happen if you used this version of //
    // // Constructor in the comment box below //
    // /////////////////////////////////////////////////////// //
    // // FountainPen(std::string pen_name = "FountainPen") // //
    // // : Pen(pen_name) {} // //

    // /////////////////////////////////////////////////////// //
    /////////////////////////////////////////////////////////////
    FountainPen(std::string pen_name)
    : Pen(pen_name) {}
    FountainPen() : Pen(std::string("FountainPen")){}
    std::string drawLine();
    std::string drawCircle();
    };
    
#endif