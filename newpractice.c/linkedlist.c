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
struct node *deleteend(struct node *);
struct node *deleteafter(struct node *);
struct node *deletegiven(struct node *);
struct node *deletell(struct node *);
int main(){
    int ch;
    do{
        printf("\nMAIN MENU\n");
        printf("\n1.Creaate ll \n");
        printf("\n2.Exit\n");
        printf("\n3.Display\n");
        printf("\n4.Insert at Beginning\n");
        printf("\n5.Insert at End\n");
        printf("\n6.Insertion before");
        printf("\n7.Insertion After\n");
        printf("\n8.Delete beginning node\n");
        printf("\n9.Delete at end\n");
        printf("\n10.Delete after\n");
        printf("\n11.Deletion of given node\n");
        printf("\n12.Deleting whole ll\n");
        printf("\nEnter option\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            head=createll(head);
            printf("Dn");
            break;
            case 3:
            head=display(head);
            break;
            case 4:
            head=insertbegin(head);
            printf("\nDone insertion at the beginning\n");
            break;
            case 5:
            head=insertend(head);
            break;
            case 6:
            head=insertbefore(head);
            printf("\nDone insertion before");
            break;
            case 7:
            head=insertafter(head);
            printf("\nDone insertion after");
            break;
            case 8:
            head=deletebegin(head);
            printf("\nDone deletion from beginning");
            break;
            case 9:
            head=deleteend(head);
            printf("\nDone deletion at end\n");
            break;
            case 10:
            head=deleteafter(head);
            printf("\nDone deletion before\n");
            break;
            case 11:
            head=deletegiven(head);
            printf("\nDone deletion of given data");
            break;
            case 12:
            head=deletell(head);
            printf("\nDone");
            break;
        }
    }
    while(ch!=2);
return 0;
}
struct node *createll(struct node *head){
    struct node *ptr,*preptr;
    int op;
    printf("\nenter -1 if u dont wnna cntinue \n");
    scanf("%d",&op);
    while(op!=-1){
        ptr=(malloc(sizeof(struct node)));
        if(ptr==NULL){
            printf("overflow");
        } 
        else{
            printf("\nenter data");
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
        }
        printf("\nif u dont wnna continue press -1");
        scanf("%d",&op);
    }
    return head;
}
struct node *display(struct node *head){
    struct node *ptr=head;
    printf("\nElements are:\n");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return head;
}
struct node *insertbegin(struct node *head){
    struct node *ptr;
    ptr=(malloc(sizeof(struct node)));
    if(ptr==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
        scanf("%d",&ptr->data);
        ptr->next=head;
        head=ptr;
    }
    return head;    
}
struct node *insertend(struct node *head){
    struct node *last,*ptr=head;
    last=malloc(sizeof(struct node*));
    if(last==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
        scanf("%d",&last->data);
        last->next=NULL;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=last;
    }
    return head;
}
struct node *insertbefore(struct node *head){
    int value;
    struct node *ptr=head,*new,*preptr;
    new=malloc(sizeof(struct node));
    if (new==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
        scanf("%d",&new->data); 
        printf("enter data  of node before which u wnna insert new node");
        scanf("%d",&value);
        while(ptr->data!=value){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=new;
        new->next=ptr;      
    }
    return head;
}    
struct node *insertafter(struct node *head){
    struct node *new,*ptr=head;
    new=malloc(sizeof(struct node));
    int value1;
    if(new==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
        scanf("%d",&new->data);
        printf("enter value pf node after which u wnna insert node ");
        scanf("%d",&value1);
        while(ptr->data!=value1){
            ptr=ptr->next;
        }
        new->next=ptr->next;
        ptr->next=new;
    }
 return head;
} 
struct node *deletebegin(struct node *head){
    struct node *ptr=head;
    if(ptr==NULL){
        printf("underflow");
    }
    else{
        head=head->next;
        free(ptr);
    }
    return head;//isme head ko or qa kru ki vo ek aage hojaye qki ese to head hi head ka nxt bnega
}
struct node *deleteend(struct node *head){
    struct node *ptr=head,*preptr;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return head;
}    
struct node *deleteafter(struct node *head){
    struct node *ptr=head,*preptr;
    int value;
    printf("enter value jha k baad ka data u wnna dlt");
    scanf("%d",&value);
    while(preptr->data!=value){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return head;
}  
struct node *deletegiven(struct node *head){
    struct node *ptr=head,*preptr;
    int value;
    printf("enter vlue to be dlted");
    scanf("%d",&value);
    while(ptr->data!=value){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return head;
}
struct node *deletell(struct node *head){
    struct node *ptr=head,*preptr;
    preptr=ptr;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
        free(preptr);
    }
    free(ptr);
    head->next=NULL;
    return head;
}