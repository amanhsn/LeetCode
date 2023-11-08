//linkedlist
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
    Node* head;
    Linkedlist(){
        head = NULL;
    }

    void insertAtHead(int);
    void insertNode(int);
    void printList();
    void deleteNode(int);
    void insertAtLocation(int,int);  
};

void Linkedlist::insertAtHead(int new_value){
    Node* new_node = new Node(new_value);
    new_node->next=head;
    head=new_node;
}
void Linkedlist::printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    if(temp == NULL){
        cout<<"Empty List";
    }
    cout<<endl;
}


