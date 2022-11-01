#include<stdio.h>
int main(void){
    for(int i=1;i<=1;i++){
    int i,pilihan;
    float a,b,hasil;
menu :
    printf("\n1.Penjumlahan\n");
    printf("2.Pengurangan\n");
    printf("3.Perkalian\n");
    printf("4.Pembagian\n");
    printf("5.Exit\n");
     printf("Masukkan pilihan :");
    scanf("%d",&pilihan);
    if (pilihan==5){
    printf("Terimakasih, telah menggunakan kalkulator Ridhani Setiadi",hasil);
    break;
    }
    else if (pilihan>5){
    printf("Input anda salah, silahkan coba lagi");
    goto menu ;
    }
    printf("Masukkan Nilai Pertama :");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua :");
    scanf("%f",&b);
if(pilihan==1){
    hasil=a + b;
    printf(" Hasil penjumlahan antara %.f+%.f = %.2f",a,b,hasil);
    goto menu ;
}
else if(pilihan==2){
    hasil=a - b;
    printf(" Hasil pengurangan antara %.f - %.f = %.2f",a,b,hasil);
    goto menu ;
}
else if(pilihan==3){
    hasil=a * b;
    printf(" Hasil perkalian antara %.2f * %.2f = %.2f",a,b,hasil);
    goto menu ;
}
else if(pilihan==4){
    hasil=a / b;
    printf(" Hasil pembagian antara %.f / %.f = %.2f",a,b,hasil);
    goto menu ;
}  
}
}


