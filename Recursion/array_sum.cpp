#include<iostream>
using namespace std;

int array_sum(int *arr , int n){
    if(n==0){
        return 0;
    }
    return arr[0]+array_sum(arr+1,n-1);

}
int main(){

    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=array_sum(a,n);
    cout<<sum<<endl;
    return 0;
}