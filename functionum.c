
//with argumt with wrtn value
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,result;
    printf("enter 2 number :\n");
    scanf("%d%d",&a,&b);
    result=sum(a,b);
    printf("sum is %d",result);
    return 0;
}
int sum(int num1 ,int num2){
    int c;
    c=num1+num2;
    return c;
   

}