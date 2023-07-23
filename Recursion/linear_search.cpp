#include<iostream>
using namespace std;
bool linear_search(int *arr, int size, int key){
    if(size==0){
        return 0;
    }
    if(key==arr[0]){
        return 1;
    }
    return linear_search(arr+1,size-1,key);
}
int main(){

    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(linear_search(arr,n,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
