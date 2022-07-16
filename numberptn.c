//      1
//     123
//    12345
//   1234567
//  123456789
//   1234567
//    12345
//     123
//      1

#include<stdio.h>
int main(){
    int n,i,k,j,l,m,o;
    printf("enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){                 
            printf("%d",k);
        }
    printf("\n");
    }
    for(m=1;m<=n;m++){
        for(o=1;o<=m+1;o++){
            printf(" ");
        }
        for(l=1;l<=2*(n-m)-1;l++){
            printf("%d",l);
            
        }
        
    printf("\n");
    }
  
}