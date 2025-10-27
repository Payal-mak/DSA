#include<iostream>
using namespace std;

class stack{
    private:
    int *arr;
    int top;
    int capacity;

    public:
    stack(int size){
        arr = new int[size];
        top = -1;
        capacity = size;

    }

    int size(){
        return (top + 1);
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top == capacity - 1){
            return true;
        }
        else{
            return false;
        }
    }

    int peek(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int push(int val){
        if(!isFull()){
            arr[++top] = val;
        }
        else{
            cout << "stack full";
            return;
        }
    }
};