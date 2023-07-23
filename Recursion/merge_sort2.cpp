#include<iostream>
using namespace std;

void merge(int *arr , int s,int e){
    
    int mid=s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    
}
void merge_sort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid = s+(e-s)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){

    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}