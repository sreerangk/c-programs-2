#include<stdio.h>
int main()
{
    int i,j,limit,c=1;
    printf("enter the limit of piramid ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
} 