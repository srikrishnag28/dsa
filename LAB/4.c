#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int compute(double op1, double op2, char symbol){
    switch(symbol){
        case '+': return (op1+op2);
        case '-': return (op1-op2);
        case '*': return (op1*op2);
        case '/': return (op1/op2);
        case '^': return pow(op1,op2);
        default: return 0;
    }
}
int main(){
    char postfix[20];
    double op1,op2,s[20],res;
    int i, top = -1;
    printf("Enter the postfix expression\n");
    gets(postfix);
    for(i=0;i<strlen(postfix);i++){
        if(isdigit(postfix[i])){
            s[++top] = postfix[i] - '0';
        }
        else{
            op2 = s[top--];
            op1 = s[top--];
            res = compute(op1,op2,postfix[i]);
            s[++top] = res;
        }
    }
    res = s[top--];
    printf("Result = %f\n",res);
    return 0;
}