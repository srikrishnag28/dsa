#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void remove(int pos, Node* & head){
    Node* temp =head;
    
    
}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    node1 -> next = node2;
    Node* node3 = new Node(30);
    node2 -> next = node3;
    Node* node4 = new Node(40);
    node3 -> next = node4;
    print(node1);
    return 0;
}