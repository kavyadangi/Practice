#include<stdio.h>
#define max 20
int top=-1;
int stack[max];
void push(int stack[]);
void display(int stack[]);
void pop(int stack[]);
void peek(int stack[]);
int main(){
    int ch; 
    do{
        printf("\n..Main Menu..\n");
        printf("\n1.push\n");
        printf("\n2.exit\n");
        printf("\n3.display\n");
        printf("\n4.pop\n");
        printf("\nenter ur option\n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
        push(stack);
        break;
        case 3:
        display(stack);
        break;
        case 4:
        pop(stack);
        break;
    }
    }
    while(ch!=2);
}
    void push(int stack[]){
    if(top==max-1){
        printf("ovrflow");
        }
    else{
        top++;
    }
    printf("enter data");
    scanf("%d",&stack[top]);
}
void display(int stack[]){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    } 
}
void pop(int stack[]){
    if(top==-1){
        printf("underflow");
    }
    else{
        printf("deleted elmnt is %d",stack[top]);
        top--;
    }
}