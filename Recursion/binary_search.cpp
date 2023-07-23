#include<iostream>
using namespace std;

bool binary_search(int *arr, int s,int e, int key){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]>key){
        return binary_search(arr,s,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,e,key);
    }
}
int main(){

    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(binary_search(arr,0,n-1,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}