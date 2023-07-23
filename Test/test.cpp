#include<iostream>
using namespace std;

int say(int *a, int size,int ele)
{
   if(size==0)
 return 0;
  if(a[0]==ele)
  return 1;
  return say(a+1,size-1,ele);
}
int main()
{
 int n,ele;
    cout<<"enter the size"<<endl;
    cin>>n;
    int *a=new int[n];
    cout<<"enter the numbers"<<endl;
        for(int i=0;i<n;i++)
           {
             cin>>a[i];
           }
    cout<<"enter the ele"<<endl;
    cin>>ele;
     int x=say(a,n,ele);
     if(x==1)
         cout<<" the element "<<ele<<" found "<<endl;
    else
       cout<<"the element  "<<ele<<" not found "<<endl;
}