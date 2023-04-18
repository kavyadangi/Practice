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
    printf("konsa dlt krna h ");
    scanf("%d",&pos);
    i=pos;
    while(i<=a-1){
        arr[i]=arr[i+1];
        i=i+1;
}
    a=a-1;
    printf("after dltion");
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}