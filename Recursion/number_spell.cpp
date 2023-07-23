
#include <iostream>
#include<string.h>
using namespace std;

void print(int n){
    string s[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

    if(n==0){
        return ;
    }
    print(n/10);
    cout<<s[n%10]<<" ";
}
int main()
{
   int n;
   cin>>n;

   print(n);
   cout<<endl;
    return 0;
}
