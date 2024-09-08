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
    void insert_at_between(int data, int pos)
    {
        if(pos<0){
            cout << "entered invalid position!" ;
            return;
        }
        if(pos==0){
            insert_at_beginning(data);
            return;
        }
        Node* temp = head;
        int count = 0;
        while(count < pos - 1 && temp -> next != nullptr)
        {
            temp = temp -> next;
            count++;
        }
        if(temp ->next == nullptr){
            cout << "end of list" ;
            return;
        }
        Node* newNode = new Node(data);
        newNode -> next = temp -> next;
        temp -> next = newNode;
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


    //1. Count the number of Nodes in the LinkedList
    int count(int key)
    {
        Node* temp = head;
        int count = 0;
        while(temp -> next != nullptr){
            if(temp -> data == key){
                count++;
            }
            temp = temp->next;
        }
        return count;
    }

    //2. Count the number of Odd and Even number of elements in the LinkedList
    void even_odd_count()
    {
        Node* temp = head;
        int even = 0;
        int odd = 0;
        while(temp -> next != nullptr){
            if(temp -> data % 2 == 0){
                even++;
            }
            temp = temp->next;
        }
        odd++;
        cout << "Even elements: " << even << endl << "Odd elements: " << odd << endl;
        return;
    }
    void delete_node(int key)
    {
        Node* temp = head;
        if(head == nullptr){
            cout << "Linked List doesn't exist";
            return;
        }
         // If the node to be deleted is the head node
        if (temp->data == key) {
            head = temp->next; // Move head to the next node
            delete temp; // Delete the old head
            return;
        }
        // Traverse the list to find the node to delete
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If the key was not found in the list
        if (temp == nullptr) {
            cout << "Node with value " << key << " not found in the list." << endl;
            return;
        }

        // Unlink the node from the list
        prev->next = temp->next;
        delete temp;

    }

};


int main(){
    LinkedList list;
    list.insert_at_beginning(30);
    list.insert_at_beginning(30);
    list.insert_at_beginning(20);
    list.insert_at_beginning(10);
    list.insert_at_end(40);
    list.insert_at_between(50, 3);
    list.display();
    cout << endl;
    int key = 30;
    bool result = list.search(key);
    cout << result << endl;
    int occurence = list.count(key);
    cout << occurence << endl;
    list.delete_node(40);
    list.display();
    list.even_odd_count();

    return 0;
}