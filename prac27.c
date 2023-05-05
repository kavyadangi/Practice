#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int choice;
    printf("enter -1 if u wnt to stop");
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
            ptr->next=NULL;
            if(head==NULL){
                head=ptr;
                preptr=ptr;
            }
            else{
                preptr->next=ptr;
                preptr=ptr;
            }
        }
        printf("enter -1 if u wnt to stop");
        scanf("%d",&choice);
        
    }
    for(ptr=head;ptr!=NULL;ptr=ptr->next ){
        printf("%d",ptr->data);
    }

    return 0;
}







































