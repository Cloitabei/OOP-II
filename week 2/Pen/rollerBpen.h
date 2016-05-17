#ifndef RBPEN_H
#define RBPEN_H

#include "pen.h"

class RollerBallPen : public Pen{
    public:
    RollerBallPen(std::string pen_name)
    : Pen(pen_name) {}
    RollerBallPen() : Pen(std::string("RollerBallPen")){}
    std::string drawLine();
    std::string drawCircle();
    };
    
#endif