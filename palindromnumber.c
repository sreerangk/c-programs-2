#include<stdio.h>  
int main()    
{    
int n,r,temp,sum=0;
printf("enter a palindrom number");
scanf("%d",&n);
temp=n;

while (n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("enterd number is palindrom");
else
printf("number is not a palindrom");

return 0;

}
