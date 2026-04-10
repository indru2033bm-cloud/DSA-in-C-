#include<iostream>

using namespace std;

class stack{
    int *arr;
    int top;
    int capacity;
    public:
    stack(int size){
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    void push(int val){
        if(top == capacity - 1){
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
};