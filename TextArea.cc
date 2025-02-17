#include "defs.h"
#include "TextArea.h"


TextArea::TextArea() {
    this->dimensions.x = 0;
    this->dimensions.y = 0;
    this->dimensions.width = 0;
    this->dimensions.height = 0;
    this->id = "";
    this->text = "";
    this->border = RGB(0, 0, 0);
    this->fill = RGB(255,255,255);
}

TextArea::TextArea(const TextArea& copy) {
    this->dimensions = copy.dimensions;
    this->id = copy.id;
    this->text = "DUPLICATE";
    this->border = RGB(0, 0, 0);
    this->fill = RGB(255,255,255);
} 

TextArea::TextArea(int x, int y, int width, int height, const string& id, const string& label, RGB fill, RGB border) {
    this->dimensions.x = x;
    this->dimensions.y = y;
    this->dimensions.width = width;
    this->dimensions.height = height;   
    this->id = id;
    this->text = label;
    this->fill = fill;
    this->border = border;
}

TextArea::TextArea(const Rectangle& rectangle, const string& id, const string& label, RGB fill, RGB border) {
    this->dimensions = rectangle;
    this->id = id;
    this->text = label;
    this->fill = fill;
    this->border = border;
}

void TextArea::print() const {
    cout << "TextArea id: " << id << endl;
    cout << "Preferred location: " << dimensions.x << ", " << dimensions.y << endl;
    cout << "Size: " << dimensions.width << ", " << dimensions.height << endl;
    cout << "Text: " << text << endl;
}


void TextArea::setFill(RGB fill) {
    this->fill = fill;
}
void TextArea::setBorder(RGB border) {
    this->border = border;
}
bool TextArea::overlaps(const TextArea& ta) const{
    return !(dimensions.x + dimensions.width <= ta.dimensions.x ||  
             ta.dimensions.x + ta.dimensions.width <= dimensions.x ||  
             dimensions.y + dimensions.height <= ta.dimensions.y ||  
             ta.dimensions.y + ta.dimensions.height <= dimensions.y); 
}

// implement getters and setters as needed