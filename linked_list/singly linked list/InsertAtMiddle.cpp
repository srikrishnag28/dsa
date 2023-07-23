#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this -> data = data ;
        this -> next =NULL;
    }
};
void Insert(int pos , int ele , Node* &node){
    Node* newnode = new Node(ele);
    Node* temp = node;
    pos=pos-2;
    while((pos)--){
        temp = temp -> next ;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}
int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(30);
    node1 -> next = node2;
    Node* node3 = new Node(40);
    node2 -> next = node3;
    print(node1);
    Insert(2,20,node1);
    print(node1);
    Insert(3,25,node1);
    print(node1);
    return 0;
}