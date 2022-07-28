// ABCDEFGFEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A
#include<stdio.h>
int main(){
    int n,i,k,l;
    char j;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
            printf("%c",k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=71-i;l>=65;l--)
            if(l!=71)
                printf("%c",l);
        printf("\n");
    }
    
}
  