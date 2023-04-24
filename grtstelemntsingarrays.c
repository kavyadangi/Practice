#include<stdio.h>
int main(){
    int i,a;
    printf("enter");
    scanf("%d",&a);
    int arr[a],x,y,z;
    for(i=0;i<a;i++){
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
    x=arr[0];
    z=0;
    for(i=0;i<a;i++){
        if(arr[i]>x){
            x=arr[i];
           

        }
        
    }
    
    printf("lrgst is %d\n",x);
    y=0;
    for(i=0;i<a;i++){
        if(arr[i]!=x){

        
         if(arr[i]>y){
            y=arr[i];

        }
        }
        
    }
    printf("%d is the scnd lrgst",y);
    return 0;
}
