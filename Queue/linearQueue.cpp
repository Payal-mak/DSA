#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front, rear, size;
    int *arr;

    public:
    Queue(int s){
        arr = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }

    bool isEmpty(){
        if(front == -1 || front > rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int val){
        if(rear == size - 1){ 
            cout << "queue is full" << endl;
            return;
        }
        arr[++rear] = val;
        cout << "enqueued element: " << val << endl;
        if(front == -1){
            front++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout << "queue is empty" << endl;
            return;
        }
        cout << "dequeued the element: " << arr[front] << endl;
        front++;
    }

    void peek(){
        if(isEmpty()){
            cout << "the queue is empty" << endl;
            return;
        }
        cout << "the front element is: " << arr[front] << endl; 
    }

};

int main() {
    Queue q(5); 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.peek();    
    q.dequeue(); 
    q.peek();    
    return 0;
}
