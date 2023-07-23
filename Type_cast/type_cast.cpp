#include<iostream>
using namespace std;
int main(){
    int a = 'a';
    cout<< a <<endl;
    cout<< (char)a <<endl;

    char b = 98;
    cout<< b <<endl;

    char c = 123456;
    cout<< c <<endl;
    int d = c;
    cout<< d <<endl;

    int e;
    e = cin.get();
    cout<< "e = "<< e <<endl;
    
    return 0;
}