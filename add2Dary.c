#include<stdio.h>
int main()
{
    int i,j,size,a[100][100],b[100][100],c[100][100];
    printf("enter the size of array :");
    scanf("%d",&size);
    printf("enter the first array number :");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second array number :");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            c[i][j]=a[i][j]+b[i][j];   
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

return 0;
}
