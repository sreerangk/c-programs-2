// 1
// 123
// 12345
// 1234567
// 123456789
// *******
// *****
// ***
// *
#include<stdio.h>
int main()
{
int i,j,k ;
    for(i=1;i<=5;i++)
    {
      
    
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        
      
        printf("\n");
    }
        for(i=1;i<=5;i++)
    {
       
        for(k=1;k<=5-i;k++)
        {
            printf("%d",k);
        }
        
      
        printf("\n");
    }

return 0;

}