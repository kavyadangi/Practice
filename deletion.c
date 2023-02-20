#include<stdio.h>
int main(){
    int n,i,pos,temp;
    printf("enter no of elemnts");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before deletion : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nkhaa krana h deletion\n");
    scanf("%d",&pos);
    temp=n-1;
    while(temp>=pos){
        arr[temp+1]=arr[temp];
        temp--;
    }
    
return 0;
}
