#include <iostream>
#include <sstream>
using namespace std;
class Node{
    public:
    int coef;
    int exp;
    Node *next;
    Node(int co,int ex){
        coef=co;
        exp=ex;
        
        next=nullptr;
    }
    
};
class LinkedList{
    private:
    
    Node* head;

    public:
    LinkedList(){
        head=nullptr;

    }
    void insert_at_begin(int coef,int exp){
        Node* temp=new Node(coef,exp);
        temp->next=head;
        head=temp;
    }
    void insert_at_end(int coef,int exp){
        Node* temp1=new Node(coef,exp);
        if (head==nullptr)
        {
            head=temp1;
            return;
        }
        
        Node* temp=head;
        while (temp->next !=nullptr)
        {
            temp=temp->next;
        }
        temp->next=temp1;
        
    }
    void print() 
{ 
    if(head==nullptr){
    cout<<"LL Does not exits";
    return;
    }

    Node* temp=head;
    while (temp != nullptr){
        cout<<temp->coef<<"x^"<<temp->exp<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    

}
Node* getHead(){
    return head;
}
void Add_LL(Node* head1,Node* head2){
    if(head1==nullptr || head2==nullptr){
        cout<<"Any of the LL is Empty"<<endl;
        return;
    }
    Node* temp1=head1;
    Node* temp2=head2;
    LinkedList result;
    while (temp1!=nullptr && temp2!=nullptr)
    {
        if(temp1->exp > temp2->exp){
            result.insert_at_end(temp2->coef,temp2->exp);
            temp2=temp2->next;
        }
        else if(temp2->exp > temp1->exp){
            result.insert_at_end(temp1->coef,temp1->exp);
            temp1=temp1->next;
        }
        else{
            result.insert_at_end((temp1->coef + temp2->coef),temp1->exp);
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    while (temp1!=nullptr)
    {
        result.insert_at_end(temp1->coef,temp1->exp);
        temp1=temp1->next;
        
    }
    while (temp2!=nullptr)
    {
        result.insert_at_end(temp2->coef,temp2->exp);
        temp2=temp2->next;
        
    }
    result.print();
    return;
    
    
}

    
    

void Sub_LL(Node* head1,Node* head2){
    if(head1==nullptr || head2==nullptr){
        cout<<"Any of the LL is Empty"<<endl;
        return;
    }
    Node* temp1=head1;
    Node* temp2=head2;
    LinkedList result;
    while (temp1!=nullptr && temp2!=nullptr)
    {
        if(temp1->exp > temp2->exp){
            result.insert_at_end(temp2->coef,temp2->exp);
            temp2=temp2->next;
        }
        else if(temp2->exp > temp1->exp){
            result.insert_at_end(temp1->coef,temp1->exp);
            temp1=temp1->next;
        }
        else{
            result.insert_at_end((temp1->coef - temp2->coef),temp1->exp);
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    while (temp1!=nullptr)
    {
        result.insert_at_end(temp1->coef,temp1->exp);
        temp1=temp1->next;
        
    }
    while (temp2!=nullptr)
    {
        result.insert_at_end(temp2->coef,temp2->exp);
        temp2=temp2->next;
        
    }
    result.print();
    return;
    }
    void Mul_LL(Node* poly1, Node* poly2) {
        LinkedList result;
        
        for (Node* ptr1 = poly1; ptr1 != nullptr; ptr1 = ptr1->next) {
            for (Node* ptr2 = poly2; ptr2 != nullptr; ptr2 = ptr2->next) {
                int newCoeff = ptr1->coef * ptr2->coef;
                int newExp = ptr1->exp + ptr2->exp;
                result.insert_at_end(newCoeff,newExp);
                
            }
        }
        result.print();
        return ;
    }
    void Div_LL(Node* head1,Node* head2){
        if(head1==nullptr || head2==nullptr){
            cout<<"Any of the LL is Empty"<<endl;
            return;
        }
        Node* temp1=head1;
        Node* temp2=head2;
        LinkedList result;
        while (temp1!=nullptr && temp2!=nullptr)
        {
            if(temp1->exp > temp2->exp){
                result.insert_at_end(temp2->coef,temp2->exp);
                temp2=temp2->next;
            }
            else if(temp2->exp > temp1->exp){
                result.insert_at_end(temp1->coef,temp1->exp);
                temp1=temp1->next;
            }
            else{
                result.insert_at_end((temp1->coef / temp2->coef),temp1->exp);
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        while (temp1!=nullptr)
        {
            result.insert_at_end(temp1->coef,temp1->exp);
            temp1=temp1->next;
            
        }
        while (temp2!=nullptr)
        {
            result.insert_at_end(temp2->coef,temp2->exp);
            temp2=temp2->next;
            
        }
        result.print();
        return;
    }
    void LL_calcu(Node* head1,Node* head2){
        LinkedList result;
        int k;
        cout<<"0: addition, 1: substraction, 2: Division, 3: Multiplication"<<endl;
        cin>>k;
        switch (k)
        {
        case 0:

            result.Add_LL(head1,head2);
            break;
        case 1:

            result.Sub_LL(head1,head2);
            break;
        case 2:

            result.Div_LL(head1,head2);
            break;
        case 3:

            result.Mul_LL(head1,head2);
            break;
        
        default:
            cout<<"InValid value"<<endl;
            break;
        }
        return;
    }
    void insert_add(int coef,int exp){
        Node* temp1=new Node(coef,exp);
        if (head==nullptr)
        {
            head=temp1;
            return;
        }
        Node* trav=head;
            while (trav!=nullptr)
            {
                if(trav->exp==temp1->exp){
                    trav->coef+=temp1->coef;
                    return;
                }
                trav=trav->next;
            }
        
        Node* temp=head;
        while (temp->next !=nullptr)
        {
            
            
            temp=temp->next;
            

        }
        temp->next=temp1;
        
    }
    
};
int main(){
    LinkedList list;
    list.insert_at_end(2,1);
    list.insert_at_end(5,2);
    list.insert_at_end(8,3);
    list.insert_add(6,2);
    list.insert_add(2,3);
    list.print();
    
    return 0;
}