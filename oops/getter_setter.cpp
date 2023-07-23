#include<iostream>
using namespace std;

class Hero {
    int health;
    public : 
    int  get_health(){
        return health;
    }
    void set_health(int i){
        health = i;
    }
};
int main(){
    Hero h1;
    h1.set_health(90);
    cout<<h1.get_health()<<endl;
    return 0;
}