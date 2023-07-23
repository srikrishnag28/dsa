#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node* &head){
    Node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtPosition(Node* &head, int val, int pos){
    Node* newnode = new Node(val);
    Node* temp = head;
    if(pos==1){
        if(head==NULL){
            head = newnode;
            return;
        }
        newnode->next = temp;
        temp->prev = newnode;
        head = newnode;
        return;
    }
    pos=pos-2;
    while(pos){
        temp = temp->next;
        pos--;
    }
    if(temp->next == NULL){
        temp->next = newnode;
        newnode->prev = temp;
    }
    else{
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next =newnode;
        newnode->prev = temp;
    }
}
int main(){
    Node* node1 = new Node(50);
    Node* head = node1;
    print(head);
    InsertAtPosition(head,40,1);
    InsertAtPosition(head,30,1);
    InsertAtPosition(head,70,4);
    InsertAtPosition(head,60,4);
    print(head);
    return 0;
}