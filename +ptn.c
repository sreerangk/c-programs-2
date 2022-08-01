#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter the limit ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
            for(j=0;j<=n+1;j++){
                if(i==n/2||j==n/2){
                printf("+");
            }else
            printf(" ");
        }
       
        printf("\n");
    }
}