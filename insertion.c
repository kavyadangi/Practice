#include<stdio.h>
int main(){
    int n,i,pos,temp;
    printf("enter no of elemnts");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before insertion : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nkhaa krana h insertion\n");
    scanf("%d",&pos);
    temp=n-1;
    n=n+1;
    while(temp>=pos){
        arr[temp+1]=arr[temp];
        temp--;
    }
    printf("ch; bta qa dlna h\n ");
    scanf("%d",&arr[pos]);
    printf("afeter insertion\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}
