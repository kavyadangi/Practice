#include<stdio.h>
int main(){
    int n,i,pos;
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
    while(pos<=n-1){
        arr[pos]=arr[pos+1];
        pos++;
       
    }
     n--;
     printf("afeter dletion");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
return 0;
}
