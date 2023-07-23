#include<stdio.h>
#include<stdlib.h>
int a[20], n, ele, pos;
void insert();
void delete();
void display();
int main(){
    int choice, i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("%d array elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    do{
        printf("Enter your choice\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:
            insert();
            break;
            case 2:
            delete();
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
void insert(){
    int i;
    printf("Enter element and postion\n");
    scanf("%d%d", &ele, &pos);
    if(pos>0 && pos<=n+1){
        for(i=n;i>=pos;i--){
            a[i] = a[i-1];
        }
        a[i] = ele;
        n++;
    }
    else{
        printf("Invalid position\n");
    }
}
void delete(){
    int i;
    printf("Enter postion to delete\n");
    scanf("%d",&pos);
    if(pos>0 && pos<=n){
        for(i=pos-1;i<n-1;i++){
            a[i] = a[i+1];
        }
        n--;
    }
    else{
        printf("Invalid position\n");
    }
}
void display(){
    int i;
    printf("Array elements are :");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    printf("\n");
}