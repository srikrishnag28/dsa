#include<iostream>
using namespace std;

int partition(int*arr, int s, int e){

    int piviot = arr[s];
    int count=0;
    for(int i=s+1 ; i<=e ;i++){
        if(arr[i]<=piviot){
            count++;
        }
    }

    int p = s+count;
    swap(arr[p],arr[s]);
    int i=s;
    int j=e;
    while(i<p && j>p){
       while(arr[i]<arr[p]){
        i++;
       }
       while(arr[j]>arr[p]){
        j--;
       }
       if(i<p && j>p){
        swap(arr[i++],arr[j--]);
       }
    }
    return p;
}
void quick_sort(int* arr, int s,int e){

    if(s>=e){
        return ;
    }

    int p = partition(arr,s,e);

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);

}
int main(){

    int n,a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    quick_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}