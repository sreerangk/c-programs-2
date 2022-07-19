/*
sum of odd number :
enter a limit :15
1+3+5+7+9+11+13+=49
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,n,sum=0;
	printf("enter a limit :"); 
	scanf("%d",&limit);
    for(i=1;i<limit;i++){
        if(i%2 != 0){
         sum=sum+i;
        
        printf("%d+",i);
        }
    }
    printf("=%d",sum);
    
	return EXIT_SUCCESS;
}
