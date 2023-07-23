#include<iostream>
using namespace std;


int merge(int* arr, int* temp , int const s, int const e){
    int count = 0;
    int mid = s+(e-s)/2;
    int i = s;
    int j = mid+1;
    int k=s;
    while( i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count = count + (mid-i+1);
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(int i=s;i<=e ;i++){
        arr[i]=temp[i];
    }
    cout<<s<<" "<<e<<endl;
    for(int i=s ;i<=e ;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    return count;
    
}
int merge_sort(int *arr , int* temp , int s, int e){
    int count=0;
    if(s>=e){
        return count;
    }
    int mid = s+(e-s)/2;
    count = count + merge_sort(arr,temp,s,mid);
    count = count + merge_sort(arr,temp,mid+1,e);
    return (count +merge(arr,temp,s,e));
    
}
int inversion_count(int *arr , int n){
    int* temp = new int[n];
    int ans = merge_sort(arr,temp,0,n-1);
    for(int i=0 ;i<n ;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return ans;
}
int main(){

    int n,a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = inversion_count(a,n);
    cout<<" Ans  =  "<<ans<<endl;

    return 0;
}