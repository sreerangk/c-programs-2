//  *******
//   *******
//    *******
//     *******
//      *******
//       *******
//        *******
#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
}