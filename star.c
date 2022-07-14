#include<stdio.h>
int main()
{
int i,j,k ;
    for(i=1;i<=5;i++)
    {
      
    
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        
      
        printf("\n");
    }
        for(i=5-1;i>=1;i--)
    {
       
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        
      
        printf("\n");
    }

return 0;

}