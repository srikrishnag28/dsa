#include<iostream>
using namespace std;

void update(int**p2){
    //p2=p2+1; - nocange
    //*p2=*p2+1; - value of p1 changes in main 
    //**p2=**p2+1; - value of i changes in main
}
int main(){

    int i=5;
    int*p1 =&i;
    int**p2=&p1;
    cout<<"After"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;

    return 0;
}