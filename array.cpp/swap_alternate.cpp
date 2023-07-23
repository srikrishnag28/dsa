#include<iostream>
using namespace std;
void swap_alt(int a[], int n){
    for(int i= 1; i<n ; i=i+2){
        swap(a[i],a[i-1]);
    }
}
void print(int a[],int n){
    for(int i=0; i <n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int n,key;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before Swaping : "<<endl;
    print(a,n);
    swap_alt(a,n);
    cout<<"After Swaping : "<<endl;
    print(a,n);
    return 0;
}