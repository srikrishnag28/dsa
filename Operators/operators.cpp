#include<iostream>
using namespace std;
int main(){

    int a = 0;
    int b = 3;

    //Relational Operators
    cout<< (a==b) <<endl;
    cout<< (a>=b) <<endl;
    cout<< (a<=b) <<endl;
    cout<< (a!=b) <<endl;

    cout<<endl;

    //Logical Operstors
    cout<< (a&&b) <<endl;
    cout<< (a||b) <<endl;
    cout<< !(a) <<endl;
    cout<<endl;

    //Bitwise Operstors
    int x=3;
    int y=6;
    cout<< (x&y) <<endl;
    cout<< (x|y) <<endl;
    cout<< ~(x) <<endl;
    cout<< (x^y) <<endl;

    //swift
    x = x>>1;
    y = y<<1;
    cout<< x <<"\t"<< y<<endl;
    
    return 0;
}

