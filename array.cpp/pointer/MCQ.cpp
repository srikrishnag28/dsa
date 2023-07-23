#include<iostream>
using namespace std;

int main(){

    /* int first = 8;
    int second = 10;
    int *ptr = &second;         output = 8 9
    *ptr = 9;
    cout<< first <<" "<< second << endl; */

    /* int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;                     output = 7
    cout<< first << endl; */

    /* int first = 8;
    int *p = &first;
    cout<< (*p)++ <<" ";        output = 8 9
    cout<< first << endl; */

    /* int *p = 0;
    int first = 110;
    *p = first;                 segmented error
    cout<< *p << endl; */

    /* int first = 8;
    int second = 11;
    int *third = &second;        output = 11 13
    first = *third;
    *third = *third + 2;          
    cout<< first << " " << second << endl; */

    /* see lecture 27 */

    
    return 0;
}