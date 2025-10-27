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

    void push(int val){
        if(!isFull()){
            arr[++top] = val;
        }
        else{
            cout << "stack full";
            return;
        }
    }

    int pop(){
        if(!isEmpty()){
            int a = arr[top--];
            return a;
        }
        else{
            cout << "Stack Empty";
            return -1;
        }
    }   
};

int main(){
    stack stk(5);
    stk.push(5);
    stk.push(4);
    stk.push(3);
    stk.push(2);
    stk.push(1);

    cout << "the size of stack is: " << stk.size() << endl;

    stk.pop();
    cout << "the size of stack is: " << stk.size() << endl;

    return 0;
}