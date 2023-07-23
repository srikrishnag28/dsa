#include<iostream>
using namespace std;
int main(){

    int a;
    cin>> a;
    if( a > 0 )
    cout<<"Positive"<<endl;
    else if( a < 0 )
    cout<<"Negative"<<endl;
    else
    cout<<"Zero"<<endl;

    int b = 2;
    int c = b+1;
    if((b=3)==b){
        cout<< b <<endl;
    }
    else{
        cout<< b+1 <<endl; 
    }
    cout<< b <<endl;

    char ch;
    cin>> ch;
    if( ch>='a' && ch<='z')
    cout<<"Lowercase"<<endl;
    else if(ch>='A' && ch<='Z')
    cout<<"Uppercase"<<endl;
    else if(ch>='1' && ch<='9')
    cout<<"Number"<<endl;
    else
    cout<<"Special character"<<endl;
    
    return 0;
}