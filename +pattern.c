#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter the limit ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i==((n/2)+1)){
            for(j=0;j<=n+1;j++){
                printf("+");
            }
        }
        else{
            for(j=0;j<=n/2;j++){
                printf(" ");
            }
            printf("+");
        }
        printf("\n");
    }
}