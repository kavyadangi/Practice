#include<stdio.h>
int main(){
    int i,a;
    printf("ENter ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a-1;i++){
        printf("%d",arr[i]);
         printf(",");
    }
   
    printf("%d",arr[a-1]);
return 0;
}