#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
int push(int stack[],int value);
int pop(int stack[]);
int peek(int stack[]);
int display(int stack[]);
int main(){
    int option;
    do{
        printf("\npadhariye fr agye aap khud ki beztti kraane\n");
        printf("\ncase 1:push");
        printf("\ncase 2:pop");
        printf("\ncase 3:peep");
        printf("\ncase 4:display");
        printf("\ncase 5:exit");
        printf("enter ur option");
        scanf("%d",&option);
        switch(option){
            case 1:push(stack , val);
              break;
              
        }
    }
}