#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout<< a <<endl;

    char b='a';
    cout<< b <<endl;

    bool c = true;
    cout<< c <<endl;

    float d = 12345.1;
    cout<< d <<endl;

    double e = 12345.1;
    cout<< e <<endl;

    int size_int = sizeof(a);
    cout<<"Size of INT : "<< size_int <<endl;

     int size_char = sizeof(b);
    cout<<"Size of CHAR : "<< size_char <<endl;
    
     int size_bool = sizeof(c);
    cout<<"Size of BOOL : "<< size_bool <<endl;
    
     int size_float = sizeof(d);
    cout<<"Size of FLOAT : "<< size_float <<endl;

     int size_double = sizeof(e);
    cout<<"Size of DOUBLE : "<< size_double <<endl;
    
    return 0;
}
