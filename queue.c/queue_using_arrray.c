#include<stdio.h>
#define max 20
int queue[max];
int front=-1;
int rear=-1;
void insert(int queue[]);
void display(int queue[]);
void delete(int queue[]);
int main(){
    int ch;
    do{
    printf("\n1.insert\n");
    printf("\n2.exit\n");
    printf("\n3.display\n");
    printf("\n4.delete\n");
    printf("enter your option\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        insert(queue);
        break;
        case 3:
        display(queue);
        break;
        case 4:
        delete(queue);
        break;
    }
    }
    while(ch!=2);
    return 0;
}
void insert(int queue[]){
    if(rear==max-1){
        printf("ovrflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        printf("enter data");
        scanf("%d",&queue[rear]);
    }
    else{
        rear++;
        printf("enter data");
        scanf("%d",&queue[rear]);
    }
}
void display(int queue[]){
    for(int i=front;i<=rear;i++){
        printf("%d",queue[i]);
    }
}
void delete(int queue[]){
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else if(front>rear){
        front=rear=-1;
        printf("emptied");
    }
    else{
        printf("deleted elemnt is %d",queue[front]);
        front++;
    }
}