#include<iostream>
using namespace std;
void selection_sort(int *arr, int n){
    if(n==1){
        return ;
    }
    int min=0;
    for( int j=0; j<n; j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[min],arr[0]);
    selection_sort((arr+1),n-1);
}
int main(){

    int n,a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}