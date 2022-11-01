#include<stdio.h>
int main(){
    int bil1,bil2,a,b;
    scanf("%d %d",&bil1,&bil2);
    a=bil1;
    b=bil2;
    if(bil1 > bil2){
        while (a>=bil2){
            printf("%d %d", a, b);
            a--;
            b++;
            if (a>bil2-1){
                printf(" - ");}
            else if(b<bil2-1){
                printf(" - ");}
        }
    }
    else {
        while (a<=bil2){
            printf("%d %d ", a, b);
            a++;
            b--;
            if(a<bil2+1){
                printf(" - ");}
            else if(b>bil2+1){
                printf(" - ");}
        }
    }     
}        
