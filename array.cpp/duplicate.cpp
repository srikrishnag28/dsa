#include<iostream>
using namespace std;
int sum(int a[], int n){
    int sum=0;
    for(int i=0; i<n ;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<< (sum(a,n)-((n-1)*(n)/2))<<endl;
    return 0;
}