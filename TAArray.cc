#include <iostream>
using namespace std;

#include "TAArray.h"

TAArray::TAArray(){
    size = 0;
    elements = new TextArea*[MAX_ARR];
}

TAArray::~TAArray(){
    for (int i = 0; i < size; ++i) {
        delete elements[i];  
    }
    delete [] elements;
}

bool TAArray::add(TextArea* textarea){
    if (size >= MAX_ARR) return false;
    elements[size] = textarea;
    ++size;
    return true;
}

bool TAArray::add(TextArea* textarea, int index){
    if (size >= MAX_ARR) return false;

    if (index < 0 || index > size) {
        return false;
    }

    for (int i = size; i > index; i--) {
        elements[i] = elements[i - 1];
    }

    elements[index] = textarea;
    ++size;
    return true;
}

TextArea* TAArray::get(string id) const{
    for (int i = 0; i < size; ++i){
        if (elements[i]->getid() == id){
            return elements[i];
        }
    }
    return nullptr;
}

TextArea* TAArray::get(int index) const{
    if (index < 0 || index >= size) return nullptr;
    return elements[index];
}

TextArea* TAArray::remove(string id){
    int index = 0;
    // We want to find the index of the element to remove
    while (index < size && elements[index]->getid() != id){
        ++index;
    }

    if (index == size) return nullptr;  // If the element wasn't found

    return remove(index);
}

TextArea* TAArray::remove(int index){
    // Did we fall off the end of the TAArray?
    if (index < 0 || index >= size) return nullptr;

    // We have found what we wanted to remove,
    // assign the output value
    TextArea *stu = elements[index];

    // Copy everything after index left one position
    for (int i = index; i < size - 1; ++i){
        elements[i] = elements[i + 1];
    }

    // Set the last element to nullptr (to avoid dangling references)
    elements[size - 1] = nullptr;
    --size;

    return stu;
}

void TAArray::print()
{
    cout << endl << endl << "Students:" << endl;
    for (int i = 0; i < size; ++i)
        elements[i]->print();

    cout << endl;
}
