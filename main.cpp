#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
    Arraylist *list = new Arraylist();
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;   

    
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        list->add(value);
    }

    cout << "Current list: ";
    list->print();

    
    int index;
    cout << "Enter index to remove: ";
    cin >> index;
    list->removeAt(index);

    cout << "After removeAt: ";
    list->print();

   
    cout << "Enter value to remove: ";
    cin >> value;
    list->remove(value);

    cout << "After remove(value): ";
    list->print();

    delete list;
    return 0;
}
