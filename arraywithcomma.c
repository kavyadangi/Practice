#include<stdio.h>
int main(){
    int a;
    printf("entr no");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("no s are:\n");
    for(int i=0;i<a;i++){
        printf("%d",arr[i]); 
       
        if(i==a-1){
            continue;
        }
       printf(","); 
    }
    //printf("%d",arr[a-1]);agr a-1 tk step index le jaenge toh

    return 0;
} 