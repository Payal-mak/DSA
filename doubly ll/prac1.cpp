#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
class DoublyLinkedList{
    private:
    Node* head;
    // head = nullptr which means initially we have 0 nodes
    public:
    DoublyLinkedList(){
        head = nullptr;
    }

    void display()
    {
        if(head == nullptr){
            cout << "The linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp!=nullptr){
            cout << temp -> data<<" ";
            temp = temp -> next;
        }
    }

    bool search(int key)
    {
        Node* temp = head;
        while(temp -> next!=nullptr){
            if(temp -> data == key){
                return true;
            }
            temp = temp -> next;
        }
        return false;
    }

    void insertAtPosition(int pos, int val) {
        Node* newNode = new Node(val);

        if (pos == 1) {  // If inserting at the beginning
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == nullptr) {  // If the position is out of bounds
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
};

int main(){
    DoublyLinkedList list;

    list.display();

    return 0;
}
