#include<iostream>
using namespace std;
int main(){

    int a ,i = 1, sum = 0;
    cin>> a;
    while(i<=a){
        sum =sum +i;
        i++;
    }
    cout<< sum <<endl;

    sum=0;
    for(i = 1 ; i<=a ; i++){
        sum+=i;
    }
    cout<< sum <<endl;
    return 0;
}