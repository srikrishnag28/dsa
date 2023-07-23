#include<iostream>
using namespace std;

bool pal(string s,int i){
    if(i>s.length()-1-i){
        return 1;
    }
    if(s[i]!=s[s.length()-1-i]){
        return 0;
    }
    return pal(s,i+1);
}
int main(){

    string s;
    cin>>s;
    if(pal(s,0)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}