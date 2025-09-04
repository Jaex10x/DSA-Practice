#include <iostream>
#include "list.h"
#define INITIAL_CAPACITY 5

using namespace std;
class Arraylist: public list{
    private:
    int *arr;
    int index;
    int length;

    public:
    Arraylist(){
        arr = new int[INITIAL_CAPACITY];
        index = 0;
        length = INITIAL_CAPACITY;
    }
    Arraylist(int size){
        arr = new int[size];
        index = 0;
        length = size;
    }
    void add(int num) override{
        if(index < length){
            arr[index++] = num;
        }else{
            cout<<"Array is full"<<endl;
        }
    };

    void removeAt(int pos){
        if(pos < 0 || pos >0) return;

        for(int i = pos  + 1; i < index; i++){
            arr[i] = arr[i + 1];
        }
        index--;
    }
    int get(int post){
        if(post < 0 || post >= index) return -1;
        return arr[post];
    }
    int remove(int num){
        for(int i = 0 ; i < index ; i++){
            if(arr[i] == num){
                removeAt(i);
                return i;
            }
        }
    }
    void addAt(int num,int pos){
        if(pos < 0 || pos > index || index >= length) return;

        for(int i = index - 1 ; i >= pos - 1 ; i--){
            arr[i + 1] = arr[i];
        }
        arr[pos] = num;
        index++;
    }
    int summation() override{
        int sum = 0;
        for(int i = 0 ; i < index ; i++){
            arr[i] += sum;
        }
    }
    int flip(int num) override{
        int rev = 0;
        while(index != 0){
            int digit = index % 10;
            rev = rev * 10 + digit;
            index /= 10;
        }
        return rev;
    }
    int min(int num) override{
        if(index == 0) return -1;
        int minimum = arr[0];
        for(int i = 0  ; i < index ; i++){
            if(arr[i] < minimum){
                minimum = arr[i];
            }
        }
        return minimum;
    }
    int max(int num) override{
        if(index == 0) return -1;
        int maximum = arr[0];
        for(int i = 0 ; i < index ; i++){
            if(arr[i] > maximum){
                maximum = arr[i];
            }
        }
        return maximum;
    }
    int review() override{
        for(int i = 0 ; i < index ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int size() override{
        return index;
    }
    bool isEmpty() override{
        return index == 0;
    }
    bool contains(int num){
        for(int i = 0 ; i < index ; i++){
            if(arr[i] == num) return true;
        }
        return false;
    }
    int find(int num){
        for(int i = 0 ; i < index ; i++){
            if(arr[i] == num) return i;
        }
        return -1;
    }
    int removeFirst(){
        if(index == 0) return -1;
        int first = arr[0];
        removeAt(0);
        return first;
    }
    int removeLast() override{
        if(index == 0) return -1;
        int removed = arr[index - 1];
        index--;
        return removed;
    }
    void removeAll(int num) override{
        for(int i = 0 ; i < index ; i++){
            if(arr[i] == num){
                removeAt(i);
                i--;
            }
        }
    }

};