#include <iostream>
#include "arraylist.h"

using namespace std;


int main(){

    Arraylist *list = new Arraylist();

            list->add(10);
            list->removeAt(0); 
            list->add(20);
            list->add(30); 
            list->remove(20);
            list->add(40);
            list->print();
}