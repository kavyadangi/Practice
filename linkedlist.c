#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;//h
int main(){
    int num=0;
    struct node *new,*prev,*ptr; 

    printf("enter -1 to end");
    while(num!=-1){
         new=malloc(sizeof(struct node));//h
printf("enter data");//h h h h h prev h h h 
scanf("%d",&new->data);
    new->next=NULL;
    if(start==NULL){//1st only 2nd 3rd ji loop exits ji 
        start=new;
        prev=new;
    }
    else{
        prev->next=new;//
        prev=new;
    }
    printf("enter number");
     scanf("%d",&num);
    }
ptr=start;//whi ready hokr aenge whi s
for(ptr=start;ptr!=NULL;ptr=ptr->next){
     printf("%d ",ptr->data);
}
/*while(ptr!=NULL){
  
   ptr=ptr->next; 
}*/
return 0;
    } 
