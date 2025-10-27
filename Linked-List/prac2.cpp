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
            cout << "The linked list1 does not exist" << endl;
            return;
        }
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp -> data<<" ";
            temp = temp -> next;
        }
    }

    void concatenate(Node* list1, Node* list2)
    {
        if(list1 == nullptr)
        {
            head = list2;
            return;
        }
        if(list2 == nullptr)
        {
            return;
        }
        if(list1 == nullptr && list2 == nullptr)
        {
            return;
        }
        Node* temp1 = list1;
        while(temp1 -> next != nullptr){
            temp1 = temp1 -> next;
        }
        temp1 -> next = list2;
        return;
    }
    Node* getHead(){
        return head;
    }
    
};


int main(){
    LinkedList list1, list2;
    list1.insert_at_beginning(30);
    list1.insert_at_beginning(20);
    list1.insert_at_beginning(10);
    list1.insert_at_end(40);
    cout << "List1: ";
    list1.display();

    list2.insert_at_beginning(30);
    list2.insert_at_beginning(20);
    list2.insert_at_beginning(10);
    list2.insert_at_end(40);
    cout << endl;
    cout << "List2: ";
    list2.display();
    cout << endl;

    list1.concatenate(list1.getHead(), list2.getHead());

    cout << "Concatenated List: ";
    list1.display();
    return 0;
}