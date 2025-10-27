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
};
int main(){
    stack stk(5);

    cout << "the size of stack is: " << stk.size() << endl;
    return 0;
}