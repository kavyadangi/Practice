#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *push(struct node *);
struct node *display(struct node *);
struct node *pop(struct node *);
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
        top=push(top);
        break;
        case 3:
        top=display(top);
        break;
        case 4:
        top=pop(top);
        break;
    }
    }
    while(ch!=2);
    return 0;
}
struct node *push(struct node *top){
    struct node *new;
    new=malloc(sizeof(struct node *));
    if(new==NULL){
        printf("ovrflow");
    }
    else{
        printf("enter data");
        scanf("%d",&new->data);
        new->next=top;
        top=new;
    }
     return top;   
    }
struct node *display(struct node *top){
    struct node *ptr;
    ptr=top;
    printf("elemntss are:");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return top;
}
struct node *pop(struct node *top){
    struct node *ptr;
    if(top==NULL){
        printf("underflow");
    }
    else{
       ptr=top;
       top=top->next;
       printf("dlted  elmnt is %d",ptr->data);
       free(ptr); 
    }
    return top;
}