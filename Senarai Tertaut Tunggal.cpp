#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node{
	int data;
	struct node *tautan;
}node;

void cetak_data(node *hulu){
	if(hulu == NULL){
		cout << "Maaf! Tiada data dalam senarai tertaut.";
		return;
	}
	node *penunjuk = hulu;
	while(penunjuk != NULL){
		cout << penunjuk->data << "\n";
		penunjuk = penunjuk->tautan;
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

	cout << "Data yang tersimpan:\n";
	cetak_data(hulu);

	return 0;
}
