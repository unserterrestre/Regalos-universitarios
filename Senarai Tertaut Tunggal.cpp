#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *tautan;
}node;

void cetak_data(node *hulu){
	if(hulu == NULL){
		printf("Maaf! Tidak ada data dalam senarai tertaut.");
	}
	node *penunjuk = hulu;
	while(penunjuk != NULL){
		printf("%d\n", penunjuk -> data);
		penunjuk = penunjuk -> tautan;
	}
}

int main(){
	node *hulu = (node*)malloc(sizeof(node));
	hulu -> data = 100;
	hulu -> tautan = NULL;
	
	node *data_terkini = (node*)malloc(sizeof(node));
	data_terkini -> data = 99;
	data_terkini -> tautan = NULL;
	hulu -> tautan = data_terkini;
	
	data_terkini -> tautan = (node*)malloc(sizeof(node));
	data_terkini = data_terkini -> tautan;
	data_terkini -> data = 98;
	data_terkini -> tautan = NULL;
	
	printf("Data yang tersimpan:\n");
	cetak_data(hulu);
	
	return 0;
}
