#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *creation(struct node *);
struct node *display(struct node *);
struct node *insertbegin(struct node *);
struct node *insertend(struct node *);
struct node *insertbefore(struct node *);
struct node *insertafter(struct node *);
int main(){
    int option;
    do{
        printf("\nMain Menu\n");
        printf("\n1.Create\n");
        printf("\n2.Exit\n");
        printf("\n3.Diplay\n");
        printf("\n4.Insertbegin\n");
        printf("\n5.Insertend\n");
        printf("\n6.Insertbefore\n");
        printf("\n7.Insertion After\n");
        printf("Enter option");
        scanf("%d",&option);
        switch(option){
            case 1:
            head=creation(head);
            printf("\nDone with the creation\n");
            break;
            case 3:
            head=display(head);
            printf("\nDone");
            break;
            case 4:
            head=insertbegin(head);
            printf("\nDone");
            break;
            case 5:
            head=insertend(head);
            printf("\nDone");
            break;
            case 6:
            head=insertbefore(head);
            printf("\nDone\n");
            break;
            case 7:
            head=insertafter(head);
            printf("\nDone");
            break;
        }
    }
    while(option!=2);
    return 0;
}
struct node *creation(struct node *head){
    struct node *ptr,*preptr;
    int choice;
    printf("\npress -1 if u wnna continue\n");
    scanf("%d",&choice);
    while(choice!=-1){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("ovrflow");
        }
        else{
            printf("Enter data");
            scanf("%d",&ptr->data);
            ptr->next=head;
            if(head==NULL){
                head=ptr;
                preptr=head;
            }
            else{
                preptr->next=ptr;
                preptr=ptr;
            }
        }
        printf("enter -1 to stop");
        scanf("%d",&choice);
    }
    return head;
}
struct node *display(struct node *head){
    struct node *ptr=head;
    printf("%d",ptr->data);
    while(ptr->next!=head){
        ptr=ptr->next;
        printf("%d",ptr->data);
    }
    
    return head;
}
struct node *insertbegin(struct node *head){
    struct node *new,*ptr=head;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("\nOvrflow");
    }
    else{
        printf("\nenter data ");
        scanf("%d",&new->data);
        new->next=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=new;
        head=new;
    }
 return head;

}
struct node *insertend(struct node *head){
    struct node *new,*ptr=head;
    new=malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&new->data);
    new->next=head;
    while(ptr->next!=head){
        ptr=ptr->next;

    }
    ptr->next=new;
    return head;
}
struct node *insertbefore(struct node *head){
    struct node *new,*ptr=head,*preptr;
    int value;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("pvrflow");
    }
    else{
        printf("enter data\n");
        scanf("%d",&new->data);
        printf("enter value to whose before u wnna add");
        scanf("%d",&value);
        while(ptr->data!=value){
            preptr=ptr;
            ptr=ptr->next;
        }
        new->next=ptr;
        preptr->next=new;
    }
    return head;
}
struct node *insertafter(struct node *head){
    struct node *new,*ptr=head;
    int value;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data\n");
        scanf("%d",&new->data);
        printf("enter value after which node is to be inserted");
        scanf("%d",&value);
        while(ptr->data!=value){
            ptr=ptr->next;
        }
        new->next=ptr->next;
        ptr->next=new;
    }
    return head;
}