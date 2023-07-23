#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insert(Node* &head, int d){

    //create new node
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp;

}

void print(Node* &head){
    Node* temp =head;
    while(temp!= NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){

    Node* newnode = new Node(10);
    print(newnode);
    insert(newnode,20);
    print(newnode);
    insert(newnode,30);
    print(newnode);
    
    return 0;

}