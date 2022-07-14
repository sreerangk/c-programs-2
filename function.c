#include<stdio.h>
void getArray();
void displaArray();
int main(){
    int a[100];

    getArray(a);
    displaArray(a);

    return 0;
   
}
void getArray(int a[]){
    int num,i;
    printf("entr the array number : ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
  
}


void displaArray(int a[]){
    int i;
    printf("enterd number is \n");
    for(i=0;i<5;i++){
    printf("%d",a[i]);
    
    }
     
}