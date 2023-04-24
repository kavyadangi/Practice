#include<stdio.h>
int main(){
    int i,a,pos=0;
    printf("enter");
    scanf("%d",&a);
    int arr[a],x,y,z,val;
    for(i=0;i<a;i++){
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a-1;i++){
        printf("%d",arr[i]);
        printf(",");
        
    }
    printf("%d",arr[a-1]);
    //for insertion
    printf("enter position kha enter krnah ");
    scanf("%d",&pos);
    i=a;
    while(i>=pos){
        arr[i+1]=arr[i];
        i=i-1;

    }
    a=a+1;
    printf("enter no jo enter krna h ");
    scanf("%d",&val);
    arr[pos]=val;
    printf("after insertion");
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}