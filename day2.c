#include<stdio.h>
int main(){
    int n,i,pos;
    printf("eh enter kr zsixe wrna mrungi");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before insertion aray is: ");
    for( i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    printf("h be bta kidhr dlna ");
    scanf("%d",&pos);
    int temp;
    temp=n-1;
    while(temp>pos){
        arr[temp+1]=arr[temp];
        temp=temp-1;
    }
    n=n+1;
    printf("ha  btaa samaksh bta value de\n");
    scanf("%d",&arr[pos]);
    printf("after insertend + bht saari ddaaat + bnane k bd\n");
    for( i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    
 return 0;          
}
