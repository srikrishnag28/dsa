#include<stdio.h>
int count = 0;
void tower(int n, int src, int temp, int dest){
    if(n==0){
        return;
    }
    tower(n-1,src,dest,temp);
    printf("Move disk %d from %c to %c \n",n,src,dest);
    tower(n-1,temp,src,dest);
    count++;
}
int main(){
    int n;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("total number of moves is %d\n",count);
    return 0;
}