/*print this pattern using c programming.
5432*
543*1
54*21
5*321
*4321
*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the linimt ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            printf("%d",j);
            if(i==j){
                printf("*");
            }
        }

        printf("\n");
    }
}