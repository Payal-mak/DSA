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

    int size(int top){
        return (top + 1);
    }

    int peek(int top, int &arr){
        if(top == -1){
            cout << "Stack empty";
            return INT64_MAX;
        }
        else{
            return arr[top];
        }
    }

    int push(int val){
        if(isFull()){
            arr[++top] = val;
        }
        else{
            cout << "stack full";
            return;
        }
    }

    int pop(){
        if(!isEmpty()){
            int a = arr[top];
            top --;
            return;
        }
        else{
            cout << "Stack Empty";
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

    bool isEmpty(int top){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};