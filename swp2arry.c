#include<stdio.h>

int main()
{
int a[100],b[100],limit,i,j,c,d;
printf("enter the size of array: ");
scanf("%d",&limit);
printf("enter values of array 1: ");
for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
printf("enter values of array 2: ");
for(i=0;i<limit;i++){
    scanf("%d",&b[i]);
}
for(i=0;i<=limit-1;i++){
   for(j=i+1;j<limit;j++){
       if(a[i]>a[j]){ 
        c=a[i];
        a[i]=a[j];
        a[j]=c;

       }
   }
}

for(i=0;i<=limit-1;i++){
   for(j=i+1;j<limit;j++){
       if(b[i]>b[j]){ 
        d=b[i];
        b[i]=b[j];
        b[j]=d;

       }
   }
}

printf("sorted values");
for(i=0;i<limit;i++){
    printf("%d\t",a[i]);
}

printf("\nsorted values");
for(i=0;i<limit;i++){
    printf("%d\t",b[i]);
}
return 0;
}
