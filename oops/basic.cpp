#include<iostream>
// #include "Hero.cpp"
using namespace std;


class Hero {
    public :
    int health,speed;
};
int main(){
    Hero h1;
    h1.speed = 100;
    h1.health =90;
    cout<<h1.speed<<" "<<h1.health<<endl;
    return 0;
}