#include <stdio.h>
int main(void) {
    int i,a,b;
    scanf("%d %c",&a,&b);
    for (i=1 ; i <= 50 ; i++){
        if(i % a == 0){
            printf(" %c ",b);
        }
        else{
            printf(" %d ",i);
        }
    }
}