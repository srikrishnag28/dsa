#include<iostream>
using namespace std;
void bubble_sort(int *arr, int n){
    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[i+1]);
    }
    bubble_sort(arr,n-1);
}
int main(){

    int n,a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}