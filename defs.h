#ifndef DEFS_H
#define DEFS_H
#define MAX_COMPONENTS 256

#define CuColour unsigned long

#include <iostream>
#include <string>
#include <iomanip>
#include "RGB.h"

using namespace std;

struct Rectangle{
    int x;
    int y;
    int width;
    int height;
    bool overlaps(const Rectangle& rect) const{
        if (x < rect.x + rect.width && x + width > rect.x && y < rect.y + rect.height && y + height > rect.y){
            return true;
        }
        if (rect.x < x + width && rect.x + rect.width > x && rect.y < y + height && rect.y + rect.height > y){
            return true;
        }
        return false;
    }
};



#endif