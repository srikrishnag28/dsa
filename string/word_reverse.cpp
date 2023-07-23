#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<char>& v, int s, int e){
  while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
  }
}
int main(){
  vector<char> v;
  v.push_back('n');
  v.push_back('o');
  v.push_back('t');
  v.push_back('h');
  v.push_back('i');
  v.push_back('n');
  v.push_back('g');
  v.push_back(' ');
  v.push_back('t');
  v.push_back('o');
  v.push_back(' ');
  v.push_back('s');
  v.push_back('e');
  v.push_back('e');
  v.push_back(' ');
  v.push_back('h');
  v.push_back('e');
  v.push_back('r');
  v.push_back('e');
  v.push_back(' ');
  v.push_back('!');
  int s=0;
  int e=v.size() -1;
  int count=0;
  while(s<=e){
    if((v[s]==' ')){
      reverse(v,s-count,s-1);
      count=0;
    }
    else{
      count++;
    }
    s++;
  }
  reverse(v,s-count,s-1);
  for(char i:v){
    cout<<i;
  }
  return 0;
}