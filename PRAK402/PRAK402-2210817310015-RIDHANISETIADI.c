#include<stdio.h>
int main(void){
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i % 2 !=0 ){
            printf(" %d",i);
        }
        else{}
    }
    printf("\n");
    for(i=a;i>=1;i--){
        if(i % 2 == 0){
            printf(" %d",i);
        }
    }    
}