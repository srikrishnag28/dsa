#include<iostream>
using namespace std;
int length(char name[]){
    int i=0;
    for(i=0;name[i]!='\0' ; i++);
    return i;
}
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main(){

    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    int leng = length(name);
    cout<<"Length is "<<leng<<endl;

    reverse(name,leng);
    cout<<"Reverse is "<<name<<endl;


    return 0;
}