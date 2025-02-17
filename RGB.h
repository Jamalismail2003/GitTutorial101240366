#ifndef RGB_H
#define RGB_H

#include <iostream>
#include <string>
#include "defs.h"


using namespace std;

class RGB {
    
    public: 
    RGB(int r, int g, int b);
    RGB();
    int getR() const;
    int getG() const;
    int getB() const;

    static const RGB WHITE();
    static const RGB BLACK();
    static const RGB RED();
    static const RGB GREEN();
    static const RGB BLUE();

   private:
   int r;
   int g;
   int b;

};

#endif
