#include<iostream>
using namespace std;
void rev(int a[],int n){
    for(int i=0;i<n/2; i++){
        swap(a[i],a[n-i-1]);
    }
    return ;
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
    cout<<"Befor Reversing : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    rev(a,n);
    cout<<"\nAfter reversing : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}