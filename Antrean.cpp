#include <stdio.h>

int antrean[3]; int unsur_terdepan = -1; int unsur_terbelakang = -1;

void masuk(int bilangan){
    if(unsur_terbelakang == 2){
        printf("Unsur baru tidak bisa dimasukkan karena antrean penuh.\n");
    }
	else{
    	if(unsur_terdepan == -1){
			unsur_terdepan = 0;
		}
        unsur_terbelakang++;
        antrean[unsur_terbelakang] = bilangan;
        printf("Bilangan %d memasuki antrean sebagai unsur ke-%d.\n", bilangan, unsur_terbelakang + 1);
	}
}

void keluar(){
    if(unsur_terdepan == -1 || unsur_terdepan > unsur_terbelakang){
        printf("Tidak ada unsur karena antrean kosong.\n");
    }
	else{
        printf("Bilangan %d keluar dari antrean.\n", antrean[unsur_terdepan]);
        unsur_terdepan++;
    }
}

int main(){
	int masukan;
	printf("Selamat datang di program percontohan antrean!\n");
    while(masukan != -1){
    	printf("Masukkan sebuah bilangan bulat atau hentikan program dengan mengetikkan -1: ");
    	scanf("%d", &masukan);
    	if(masukan != -1){
    		masuk(masukan);
		}
	}
	
	printf("\nMasukkan angka 1 untuk menghilangkan semua unsur atau angka 0 untuk melewatinya: ");
	scanf("%d", &masukan);
	if(masukan == 1){
		keluar();
		keluar();
		keluar();
	}
	else if(masukan == 0){
	}
	else{
		printf("Angka tidak bisa diproses oleh program.");
	}
	
	printf("Terima kasih telah menggunakan program kami.");

    return 0;
}
