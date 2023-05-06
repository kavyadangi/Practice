#include<stdio.h>
int main(){
    int n,i,data;
    printf("enter no of elemnts in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nenter the value you wanna search\n");
    scanf("%d",&data);
    for(i=0;i<n;i++){
        if(arr[i]==data){
            printf("mil gyaaaaaa at %d\n",i);
            break;
        }
        else if(arr[i]!=data && i==n-1){
            printf("cannot be done");
            
        }
    }
    /*if(i==n){
        printf("not found");
    }*/
    }