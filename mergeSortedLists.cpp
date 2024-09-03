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
    Node* getHead() {  // This method returns the head of the list
        return head;
    }

    void MergeSortedLists(Node* list1, Node* list2, LinkedList &result)
{
    Node* temp1 = list1;
    Node* temp2 = list2;

    while(temp1 != nullptr and temp2 != nullptr)
    {
        if(temp1->data < temp2->data){
            result.insert_at_end(temp1->data);
            temp1 = temp1->next;
        }
        else{
            result.insert_at_end(temp2->data);
            temp2 = temp2->next;
        }
    }

    // Add remaining elements of temp1, if any
    while(temp1 != nullptr)
    {
        result.insert_at_end(temp1->data);
        temp1 = temp1->next;
    }

    // Add remaining elements of temp2, if any
    while(temp2 != nullptr)
    {
        result.insert_at_end(temp2->data);
        temp2 = temp2->next;
    }
}

    
};


int main(){
    LinkedList list1, list2, result;
    list1.insert_at_beginning(30);
    list1.insert_at_beginning(20);
    list1.insert_at_beginning(10);
    list1.insert_at_end(40);
    cout << "List1: ";
    list1.display();

    list2.insert_at_beginning(35);
    list2.insert_at_beginning(25);
    list2.insert_at_beginning(15);
    list2.insert_at_end(45);
    cout << endl;
    cout << "List2: ";
    list2.display();
    cout << endl;

    result.MergeSortedLists(list1.getHead(), list2.getHead(), result);
    cout << "Merged List: ";
    result.display();
    cout << endl;

    return 0;
}
