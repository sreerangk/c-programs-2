//function without argmt without writn valu
#include<stdio.h>
void sum();// function dclr

int main(){
    sum();//funtn call//
    return 0;
}
//defntion//
void sum(){
    int a,b,c;
    printf("enter 2 number :\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the sum of number is :%d",c);
}