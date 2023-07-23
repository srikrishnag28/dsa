#include<iostream>
using namespace std;

class Node{

    public : 
    int data;
    Node* next;

    Node(int data){
        this -> data =data;
        this -> next =NULL;
    }
};

void insert(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp ;
    tail = temp;
}
void print(Node* &tail){
    Node* temp = tail;
    while(temp!= NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}
int main(){

    Node* tail = new Node(10);
    Node* head = tail;
    print(head);
    insert(tail,20);
    print(head);
    insert(tail,30);
    print(head);
    insert(tail,40);
    print(head);
    return 0;
}