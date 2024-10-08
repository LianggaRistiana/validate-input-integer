# Validate input integer in C
Program ini merupakan program validasi input dalam bahasa c dimana memaksa user untuk menginput data bertipe ```Integer``` agar program melangkah ke langkah selanjutnya. fungsi ```validateInputInt``` digunakan untuk mencegah program terhenti dikarenakan user menginput data selain tipe ```Integer```

## Alur Program
1. Program akan menerima input bertipe ``String``
2. Program memasuki infinite loop ketika memasuki ```while(1)``` dengan tujuan agar program terus meminta user menginput data yang benar
3. Jika didalam ```String``` yang diinput terdapat ```char``` number saja maka akan masuk variable ```var``` dan program akan memutuskan infinite loop
4. Jika didalam ```String``` yang diinput terdapat ```char``` maka program akan menampilkan ```message``` dan meminta user menginput ulang

## Kustomisasi
anda dapat mengubah pesan error sesuai keadaan di bagian 
```printf("\t\t\t Input salah! Silahkan masukan number\n");```

atau anda dapat membuat fungsi ini memiliki pesan error yang sesuai dengan argument yang diinput
dengan cara menambahkan parameter pointer ```*errorMessage``` kemudian menampilkan di terminal melalui fungsi ```printf()```
```
void validateInputInt(int *var, char *message,char *errorMessage){

  ...

  while(1){

    ...

    printf("%s\n",errorMessage);
  }
}
```
anda juga dapat membuat fungsi ini menjadi validasi data untuk tipe ```float``` dengan mengubah tipe data dan identifier yang sesuai
