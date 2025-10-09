#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#include<ctype.h>
#include<math.h>
struct stack{
    int top;
    char data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,char item){
    s->data[++(s->top)]=item;
}
float pop(STACK*s){
    return s->data[(s->top)--];
}
float complete(float opr1,char symbol, float opr2){
    switch(symbol){
    case '+':return opr1+opr2;
    case '-':return opr1-opr2;
    case '*':return opr1*opr2;
    case '/':return opr1/opr2;
    case '^':return pow(opr1,opr2);
    }
}
float evaluate_postfix(STACK*s,char postfix[20]){
    int i;
    char symbol;
    float opr1,opr2,result;
    for(i=0;postfix[i]!='\0';i++){
        symbol=postfix[i];
        if(isdigit(symbol))
            push(s,symbol-'0');
        else{
            opr2=pop(s);
            opr1=pop(s);
            result=complete(opr1,symbol,opr2);
            push(s,result);
        }
    }
}
int main()
{
    char postfix[30];
    STACK s;
    s.top=-1;
    float result;
    printf("Read postfix expression: ");
    scanf("%s",postfix);
    result=evaluate_postfix(&s,postfix);
    printf("\n The final result is %f",result);
    return 0;
}
