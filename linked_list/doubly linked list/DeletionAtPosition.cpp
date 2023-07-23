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
void DeleteAtPosition(Node* &head, int pos){
    Node* temp;
    temp = head;
    if(pos==1){
        
        head = head->next;
        head->prev =NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    pos--;
    while(pos--){
        temp = temp->next;
    }
    if(temp->next == NULL){
        temp->prev->next=NULL;
        temp->prev =NULL;
        delete temp;
    }
    else{
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);
    Node* node7 = new Node(70);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node2->prev = node1;
    node3->prev = node2;
    node4->prev = node3;
    node5->prev = node4;
    node6->prev = node5;
    node7->prev = node6;
    print(node1);
    DeleteAtPosition(node1,1);
    print(node1);
    return 0;
}