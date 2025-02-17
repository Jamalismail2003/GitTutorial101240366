#ifndef LIST_H
#define LIST_H

#define MAX_ARR 64

#include "TextArea.h"

class TAArray
{
  public:
    TAArray();
    ~TAArray();

    bool add(TextArea* textarea);
    bool add(TextArea* textarea, int index);
    
    TextArea* get(string name) const;
    TextArea* get(int index) const;

    TextArea* remove(string name);
    TextArea* remove(int index);


    bool isFull(){return size == MAX_ARR;}
    int getSize(){return size;}
    void print();
    

  private:
    TextArea** elements;
    int size;
   
};

#endif

