#include<stdio.h>
int main()
{
int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++) 
        {
            printf("*");
        }
        printf("\n");
    }
        for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
    
        for(k=i;k>=1;k--)
        {
            printf("%c",k+64);
        }
        printf("\n");
    }

}