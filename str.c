// 12345
// 2
// 3
// 4
// 5
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{  
    for(j=i;j<=5;j++) 
    {
        if(i==j||j==1||i==1)
            printf("%d",j);
            else
            printf(" ");
        } 
        printf("\n");  
        
    }
    
}
