#include <stdio.h>

void validateInputInt(int *var, char *message); // deklarasi fungsi

int main(int argc, char const *argv[])
{
    int number;

	// contoh penggunaan validasi
	// argument pertama merupakan alamat dari variable yang akan disimpan nilainya
	// argument kedua merupakan message yang akan dtampilkan
    validateInputInt(&number,"masukan number 1 : "); 

	// menampilkan hasil inputan user
    printf("%d",number);

    return 0;
}

void validateInputInt(int *var, char *message) 
{
	char buff[1024]; // digunakan untuk menampung sementara seluruh input dari user
	char check; // sebagai menampung inputan %c di sscanf

	while (1) // perulangan infinty ( agar program terus meminta input sebelum inputnya benar )
	{
		printf("%s", message); // print message yang telah ditentukan saat memanggil fungsi validasi
		fflush(stdin); // mengosongkan isi dari buffer
		if (fgets(buff, sizeof(buff), stdin) != NULL) // mengambil input dari user berupa string dan memastikan agar tidak NULL
		{
			if (sscanf(buff, "%d %c", var, &check) == 1) // memastikan bahwa inputan dari user hanya integer
			{
				break; //memutuskan perulangan while
			}
		}
		printf("\t\t\t Input salah! Silahkan masukan number\n"); // pesan input salah
	}
}
