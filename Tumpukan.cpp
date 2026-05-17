#include <stdio.h>

int tumpukan[3]; int unsur_teratas = -1;

void dorong(int bilangan){
    if(unsur_teratas == 2){
        printf("Tidak bisa memasukkan nilai baru karena tumpukan penuh.\n");
    }
	else{
        unsur_teratas++; tumpukan[unsur_teratas] = bilangan;
        printf("Program memasukkan %d ke dalam tumpukan.\n", bilangan);
    }
}

void keluar(){
    if(unsur_teratas == -1){
        printf("Tidak ada nilai karena tumpukan kosong.\n");
    }
	else{
        printf("%d berhasil dikeluarkan dari tumpukan.\n", tumpukan[unsur_teratas]);
        unsur_teratas--;
    }
}

int main() {
	int masukan;
	printf("Selamat datang di program percontohan tumpukan!\n");
    while(masukan != -1){
    	printf("Masukkan sebuah bilangan bulat atau hentikan program dengan mengetikkan -1: ");
    	scanf("%d", &masukan);
    	if(masukan != -1){
    		dorong(masukan);
		}
	}
	
	printf("\nMasukkan angka 1 untuk menghilangkan semua unsur atau angka lain untuk melewatinya: ");
	scanf("%d", &masukan);
	if(masukan == 1){
		keluar();
		keluar();
		keluar();
	}
	
	printf("\nTerima kasih telah menggunakan program kami.");
	
	return 0;
}
