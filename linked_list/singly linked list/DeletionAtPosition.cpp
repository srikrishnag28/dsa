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
    ~Node(){
        this->next =NULL;
        delete next;
    }
};
void print(Node* &head){
    Node* temp;
    temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void delllete(Node* &head, int pos){
    Node* prev = head;
    Node* curr = head;
    if(pos==1){
        head = head -> next;
        curr->next = NULL;
        delete curr;
        return;
    }
    pos=pos-2;
    curr = curr -> next;
    while(pos>0){
        curr = curr -> next;
        prev = prev -> next;
        pos--;
    }
    if(curr->next == NULL){
        prev->next =NULL;
    }
    else{
        prev->next = curr->next;
    }
    delete curr;
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
    delllete(node1,5);
    print(node1);
    return 0;
}