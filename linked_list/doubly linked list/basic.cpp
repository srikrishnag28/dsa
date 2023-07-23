#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void print(Node* &head){
    Node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp -> data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtHead(Node* &head, int val){
    Node* newnode = new Node(val);
    Node* temp;
    temp = head;
    newnode->next = temp;
    temp->prev = newnode;
    head = newnode;
}
void InsertAtTail(Node* &tail, int val){
    Node* newnode = new Node(val);
    Node* temp;
    temp = tail;
    temp->next = newnode;
    newnode->prev = temp;
    tail = newnode;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);
    print(head);
    return 0;
}