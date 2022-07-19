#include<stdio.h>
int main(){
    int i,j,a[100],limit,b=0;
    printf("enter the limit of arry");
    scanf("%d",limit);
    printf("enter the array ");
    for(i=0;i<=limit;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<=limit;j++){
        b=a[i];
        a[i]=b;
        
    }
}