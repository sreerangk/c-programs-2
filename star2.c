//      *
//     * *
//    *   *
//   *     *
//  *       *
//  *       *
//   *     *
//    *   *
//     * *
//      *
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("enter the limit of star");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
        
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            if(k==1||k==i*2-1){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
     for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){  
            printf(" ");
        }
        for(k=i*2-1;k<=n*2-1;k++){
            if(k==n*2-1||k==i*2-1){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}