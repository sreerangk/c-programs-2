#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p,i,n ;
	printf("enter a number :"); 
	scanf("%d",&p);
    for(i=1;i<=10;i++){
        
        printf("%d x %d = %d\n",i,p,i*p);
    }

    
	return EXIT_SUCCESS;
}
