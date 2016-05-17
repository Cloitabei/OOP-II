#include <iostream>
#include <string>
    
#include "pen.h"
#include "fountainPen.h"
#include "rollerBpen.h"


    using namespace std;

    void WriteWithPen(Pen &pen){
    cout << pen.drawLine() << endl;
    cout << pen.drawCircle() << endl;
    }

    int main(){
    FountainPen fp;
    WriteWithPen(fp);

    RollerBallPen rbp("A Pen that Uses a Roller Ball");
    WriteWithPen(rbp);
    Pen pen;
    WriteWithPen(pen);
    }