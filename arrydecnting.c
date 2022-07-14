#include<stdio.h>

int main()
{
int a[100],b[100],limit,i,j,c;
printf("enter the size of array: ");
scanf("%d",&limit);
printf("enter values of array 1: ");
for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<limit;i++){
    for(j=i+1;j<limit;j++){
        if(a[i]<a[j]){
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
}
printf("\nthe sorted array is :");
for(i=0;i<limit;i++){
    printf("%d\t",a[i]);
}
return 0;
}
