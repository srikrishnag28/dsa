#include<iostream>
using namespace std;

class Node{
    public : 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
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
void insert(Node* &head, int pos, int val){
    Node* newnode = new Node(val);
    Node* temp;
    temp = head;
    if(pos==1){
        newnode->next = temp;
        head = newnode;
    }
    pos = pos-2;
    
    while(pos>0){
        temp = temp -> next;
        pos--;
    }
    if(temp->next == NULL){
        temp->next = newnode;
    }
    else{
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int main(){
    
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    print(node1);
    insert(node1, 1 ,5);
    print(node1);
    return 0;
}