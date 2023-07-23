#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b&1){
        int ans=pow(a,b/2);
        return ans*ans*a;
    }
    int ans=pow(a,b/2);
    return ans*ans;
}
int main(){

    int a,b;
    cin>>a>>b;
    int ans=pow(a,b);

    cout<<ans<<endl;
    return 0;
}