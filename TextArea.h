#ifndef TEXTAREA_H
#define TEXTAREA_H

#include "defs.h"

class TextArea {
    
    public:
    TextArea();  
    TextArea(const TextArea& copy); 
    TextArea(int x, int y, int width, int height, const string& id, const string& label, RGB fill = RGB(255,255,255), RGB border = RGB(0,0,0));  
    TextArea(const Rectangle& rectangle, const string& id, const string& label, RGB fill = RGB(255,255,255), RGB border = RGB(0,0,0));  
    void print() const;
    // create getters and setters as needed
    void setFill(RGB fill);
    void setBorder(RGB border);
    bool overlaps(const TextArea& ta) const;

    private:
    Rectangle dimensions;
    string text;
    string id;
    RGB fill;
    RGB border;
};

#endif
