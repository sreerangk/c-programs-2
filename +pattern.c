//   +
//   +
// +++++
//   +
//   +
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the limit ");
    scanf("%d",&n);
  for(i=1;i<=n;i++)  
  {  
    if(i==((n/2)+1))  
    {  
      for(j=1;j<=n;j++)  
      {  
        printf("+");  
      }  
   
    }  
    else  
    {  
    for(j=1;j<=n/2;j++)  
    {  
      printf(" ");  
    }  
    printf("+");  
    }  
    printf("\n");  
  }  
  return 0;  
}  
