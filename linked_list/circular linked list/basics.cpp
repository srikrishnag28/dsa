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
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
void Insert(Node* &tail, int ele, int val){
    if(tail==NULL){
        Node* newnode = new Node(val);
        tail = newnode;
        newnode ->next = newnode;
    }
    else{
        Node* curr = tail;
        while(curr->data!=ele){
            curr = curr->next;
        }
        Node* newnode = new Node(val);
        newnode->next = curr->next;
        curr->next = newnode;
        
    }
}
void dellete(Node* &tail, int val){
    if(tail==NULL){
        cout<<"Empty"<<endl;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;
        if(curr == prev){
            tail = NULL;
            delete curr;
            return;
        }
        while(curr->data!=val){
            prev = curr;
            curr = curr->next;
        }
        if(curr == tail){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* tail){
    Node* temp;
    temp = tail;
    if(tail==NULL){
        cout<<"eMPTY"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail =NULL;
    print(tail);
    Insert(tail,4,10);
    Insert(tail,10,11);
    Insert(tail,11,12);
    dellete(tail,12);
    Insert(tail,10,9);
    print(tail);
    return 0;
}