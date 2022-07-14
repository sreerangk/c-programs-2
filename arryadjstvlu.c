#include<stdio.h>
int main(){
    int a[100],b[100],k[100],c[100],i,j,sum=0;
    printf("enter the value of arry ");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<5-1;i++){
        c[i]=a[i]*a[i+1];
        printf("%d\t",c[i]);
    }
}
