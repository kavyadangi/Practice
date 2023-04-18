#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int choice;
    printf("press -1 if  u wnt to stop the program else press any number");
    scanf("%d",&choice);
    struct node *ptr,*head=NULL,*preptr;
    while(choice!=-1){
    ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("overflow");
        }
        else{
            printf("enter data");
            scanf("%d",&ptr->data);
            if(head==NULL){
                head=ptr;
                preptr=head; 
                ptr->next=NULL;
            }
            else{
                preptr->next=ptr;
                preptr=ptr;
                ptr->next=NULL;
            }
            printf("-1 to stop");
            scanf("%d",&choice);
        } 
        
    }
    struct node *temp=head;
    while(temp!=NULL){ 
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}

