#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n,int i){
    if(i==n){
        return ;
    }
    int temp=arr[i];
    int j=i-1;
    for( ; j>=0 ;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp;
    insertion_sort(arr,n,i+1);

}
int main(){

    int arr[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n,1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}