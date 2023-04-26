#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *createll(struct node *);
struct node *display(struct node *);
struct node *insertbegin(struct node *);
struct node *insertend(struct node *);
struct node *insertbefore(struct node *);
struct node *insertafter(struct node *);
struct node *deletebegin(struct node *);
int main(){
    int option;
    do{
        printf("\nMAIN MENU");
        printf("\n1.create");
        printf("\n2.display");
        printf("\n3.exit");
        printf("\n4.insertbegin");
        printf("\n5.insertend");
        printf("\n6.insertbefore");
        printf("\n7.insertafter");
        printf("\n8.deletebegin");

        printf("\nh bae daal option konsa\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                 head=createll(head);
                  printf("\nh  krdi\n");
                  break;
            case 2: 
                head=display(head);
                  break;
            case 4:
                head=insertbegin(head);
                break;
                 case 5:
                head=insertend(head);
                break;
                case 6:
                head=insertbefore(head);
                break;
                 case 7:
                head=insertafter(head);
                break;
                case 8:
                head=deletebegin(head);
                break;
        }
        
    }
    while(option!=3);
    return 0;
}
struct node *createll(struct node *head){
    struct node *ptr,*preptr;
    int choice;
    printf("-1 dldna");
    scanf("%d",&choice);
    while(choice!=-1){
     ptr=malloc(sizeof(struct node));
     if(ptr==NULL){
        printf("ovrflow");
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
        printf("daal -1");
        scanf("%d",&choice);
        
     }
     
    }
    return head; 
}
struct node *display(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
    return head;
}
struct node *insertbegin(struct node *head){
    struct node *new;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("ovrflow");
    }
    else{
    printf("enter data");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    }
    return head;
    
}
struct node *insertend(struct node *head){
    struct node *new,*ptr=head;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
    scanf("%d",&new->data);
    new->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        
    }
    ptr->next=new;
    }
    return head; 
}
struct node *insertbefore(struct node *head){
    struct node *ptr=head,*preptr,*new;
    int a;
    printf("user uncle data daalo");
    scanf("%d",&a);//after 1 before 3
         
        
    
    new=malloc(sizeof(struct node));
        if(new==NULL){
            printf("overflow");

        }
        else{
            printf("data plz");
            scanf("%d",&new->data);
            while(ptr->data != a){
        preptr=ptr;
        ptr=ptr->next;
            }
            new->next=ptr;
            preptr->next=new;
        }
        return head;
}
struct node *insertafter(struct node *head){
    struct node *ptr=head,*preptr,*new;
    int a;
    printf("user uncle data daalo");
    scanf("%d",&a);//after 2 
         new=malloc(sizeof(struct node));
        if(new==NULL){
            printf("overflow");

        }
        else{
            printf("data plz");
            scanf("%d",&new->data);
            while(ptr->data !=a){
        preptr=ptr;
        ptr=ptr->next;
            }
            preptr=preptr->next;
            ptr=ptr->next;

            new->next=ptr;
            preptr->next=new;
        }
        return head;
}
struct node *deletebegin(struct node *head){
        struct node *ptr=head;
        
}