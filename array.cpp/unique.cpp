#include<iostream>
using namespace std;

int main(){

    int n,key;
    cout<<"Enter the size"<<endl;
    cin>>n; //2M + 1
    int a[100];
    int ans=0;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans=ans^a[i];
    }
    cout<< ans  <<endl;


    return 0;

}