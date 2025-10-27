#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
//u need to keep the head private
class LinkedList{
    private:
    Node* head;

    // head = nullptr which means initially wed have 0 nodes
    public:
    LinkedList(){
        head = nullptr;
    }

    void insert_at_beginning(int data)
    {
        
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }

    void insert_at_end(int data)
    {
        Node* new_node = new Node(data);
        if(head == nullptr){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp -> next!=nullptr){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }

    void display()
    {
        if(head == nullptr){
            cout << "The linked list does not exist" << endl;
            return;
        }
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp -> data<<" ";
            temp = temp -> next;
        }
    }

    void fibonacciLL(Node* &head, int n)
    {
        if(n <= 0){
            cout << "n is negative bro!";
            return;
        }
        if(n == 0){
            Node* newNode = new Node(0);
            head = newNode;
        }

        else if(n == 1){
            Node* newNode = new Node(0);
            head = newNode;
            Node* newNode = new Node(1);
            head -> next = newNode;
            return;
        }
        else
        {
            int count = 2, val;
            Node* p1 = head;
            Node* p2 = head -> next;
            while(count <= n){
                val = p1 -> data + p2 -> data;
                Node* newNode = new Node(val);
                p2 -> next = newNode;
                p1 = p2;
                p2 = newNode;
                count++;
                
            }
            return;
        
        }
    }
};

int main()
{
    LinkedList list1;
    Node* head = nullptr;
    int n;
    cout << "enter the number of fibonacci numbers to generate: ";
    cin >> n;

    //fibonacciLL(head, n);
}