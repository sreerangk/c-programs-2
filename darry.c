#include<stdio.h>
int main()
{
    int i, j,a[100][100],sum=0,size;
    printf("entr number size of arry");
    scanf("%d",&size);
    printf("enter the numbrs in the array");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
    printf("\n");
    }
    printf("sum is %d",sum);
return 0;
}