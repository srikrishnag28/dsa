#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    cout<<"Level Order "<<endl;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }
        if(temp->left){
            q.push(temp->left);
        }
        cout<<temp->data<<" ";
        if(temp->right){
            q.push(temp->right);
        }
    }
    cout<<endl;
}
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node* BuildTree(node* root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = BuildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = BuildTree(root->right);
}
void level_order_build(node* &root){
    int data;
    cout<<"Enyter root"<<endl;
    cin>>data;
    root = new node(data);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        int leftdata,rightdata;
        cout<<"Enter left of "<<temp->data<<endl;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right of "<<temp->data<<endl;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
    level_order_build(root);
    level_order(root);
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;
    return 0;
}