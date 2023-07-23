#include<stdio.h>
#include<stdlib.h>
#define max 3
int s[max];
int top = -1;
void push();
void pop();
void display();
int main(){
    int choice;
    do{
        printf("Enter your choice\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid choice\n");
        }
    }while(1);
    return 0;
}
void push(){
    int ele;
    if(top == max-1){
        printf("Stack overflow\n");
    }
    else{
    printf("Enter element to push\n");
    scanf("%d",&ele);
    s[++top] = ele;
    }
}
void pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("Poped out element is %d\n",s[top--]);
    }
}
void display(){
    int i;
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("Stack elements are :");
        for(i=top;i>=0;i--){
            printf("\t%d",s[i]);
        }
        printf("\n");
    }
}