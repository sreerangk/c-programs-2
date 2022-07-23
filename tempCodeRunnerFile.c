#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--)
        {
            if(i>=j){
            printf("%d",j);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}