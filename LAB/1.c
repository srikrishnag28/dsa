#include<stdio.h>
#include<stdlib.h>
int a[20], n;
void create(){
    int i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void display(){
    int i;
    printf("%d array elements are :");
    for(i=0;i<n;i++){
        printf("\t%d", a[i]);
    }
    printf("\n");
}
int main(){
    int choice;
    do{
        printf("Enter your choics\n");
        printf("1.Create an array\n");
        printf("2.Display array \n");
        printf("3.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            create();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            default:
            printf("Invalid choice\n");
        }
    }while(1);
    return 0;
}