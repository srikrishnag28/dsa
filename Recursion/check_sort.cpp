#include<iostream>
using namespace std;

bool issorted(int *arr, int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    return issorted(arr+1,size-1);
}
int main(){

    int arr[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = issorted(arr,n);
    cout<<ans<<endl;
    return 0;
}