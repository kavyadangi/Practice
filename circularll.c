#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int choice;
    printf("enter 0 if u wnna exit");
    scanf("%d",&choice);
    struct node *ptr,*head=NULL,*preptr;
    while(choice!=0){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("overflow");
        }
        else{
            printf("enter data");
            scanf("%d",&ptr->data);
            ptr
        }
    }
    

}
