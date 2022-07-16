#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter the limit ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           printf("%d",64);
       }
       printf("\n");
    }
}