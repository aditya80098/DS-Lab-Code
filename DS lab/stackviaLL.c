#include<stdio.h>
#define size 10
typedef struct stack
{
    int a[size];
    int top;
}stack_type;

int init(stack_type *v){
    v->top=-1;
}
int overflow(stack_type *s){
    if(s->top==size-1){
        return 1;
    }else{
        return 0;
    }
}
int underflow(stack_type *v){
    if(v->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack_type *v,int data){
    if(overflow(v)){
        printf("the stack is full");

    }else{
     v->a[++v->top]=data;
    }
}
int pop(stack_type *v){
    if(underflow(v)){
        printf("no element to pop");
        
    }else{
        int temp=v->a[v->top];
        v->top--;
        return temp;
        }
}
int peek(stack_type *v){
    return v->a[v->top];
}
void display(stack_type *v){
    int temptop=v->top;
    while(temptop!=-1){
        int p=v->a[temptop];
        printf("%d ",p);
        temptop--;
    }
}

int main(){
    stack_type stack;
      init(&stack);
    int num;
    scanf("%d",&num);
    while(num>0){
        int a;
        scanf("%d",&a);
        push(&stack,a);
        num--;
    }
printf("the stack is : ");
    display(&stack);
    return 0;
}