#include "RGB.h"

RGB::RGB(int r, int g, int b) {
    this->r = r;
    this->g = g;
    this->b = b;
}
RGB::RGB() {
    r = 0;
    g = 0;
    b = 0;
}

int RGB::getR() const {return r;}
int RGB::getG() const {return g;}
int RGB::getB() const {return b;}

const RGB RGB::WHITE() {return RGB(255, 255, 255);}
const RGB RGB::BLACK() {return RGB(0, 0, 0);}
const RGB RGB::RED() {return RGB(255, 0, 0);}
const RGB RGB::GREEN() {return RGB(0, 255, 0);}
const RGB RGB::BLUE() {return RGB(0, 0, 255);}

