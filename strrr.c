#include<stdio.h>
int main(){
    int i,j,k,n,l;
    printf("enter the limit ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            if(j==n){
                printf("''");
            }
            printf(" ");
           
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
            
        }
         for(l=i;l<=n;l++){
            if(l==n){
                printf("''");
            }
            printf(" ");
        }

        printf("\n");
    }
    
}