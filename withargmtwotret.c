
//with argumt without wrtn value
#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("enter 2 number :\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int num1,int num2){
    int c;
    c=num1+num2;
    printf("sum of number is \n%d",c);
   

}