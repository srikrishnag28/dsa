#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    int *numbers = new int[rows];
    int **arr = new int*[rows];
    for(int i=0;i<rows;i++){
        cout<<"Enter number of cols in row "<<i+1<<endl;
        cin>>numbers[i];
        arr[i] = new int[numbers[i]];
    }
    for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<numbers[i] ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<numbers[i] ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}