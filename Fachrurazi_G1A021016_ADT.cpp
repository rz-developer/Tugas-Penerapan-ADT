#include <stdio.h>
#include <conio.h>

struct {	
float Diagonal1;
float Diagonal2;
float Sisi;
float keliling;
float luas;
} BelahKetupat; 

void luasBelahKetupat(){ 
BelahKetupat.luas = 0.5 * BelahKetupat.Diagonal1 * BelahKetupat.Diagonal2;
printf("Luas Belah Ketupat = %f \n",BelahKetupat.luas);
}

float kelBelahKetupat(float j){
return 4 * BelahKetupat.Sisi;
}

int main(){
printf("Selamat Datang \n");
printf("Menghitung Luas dan Keliling Bangun Belah Ketupat \n");
printf("-------------------------------------------------- \n");
printf("       by Fachrurazi \n");
printf("       G1A021016 \n");
printf("-------------------------------------------------- \n");
printf("Silakan input:\n");
printf("Diagonal 1 = ");scanf("%f", &BelahKetupat.Diagonal1);
printf("Diagonal 2 = ");scanf("%f", &BelahKetupat.Diagonal2);
printf("Sisi = ");scanf("%f", &BelahKetupat.Sisi);

luasBelahKetupat();

BelahKetupat.keliling = kelBelahKetupat(BelahKetupat.Sisi);

printf("Keliling lingkaran = %f \n",BelahKetupat.keliling);

printf("------------------------------------------------- \n");
printf("	Terima kasih");
getch();
}
