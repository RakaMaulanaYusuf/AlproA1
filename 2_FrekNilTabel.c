/* Nama File        : 2_FrekNilTabel.c */
/* Deskripsi        : Menghitung dan menampilkan nilai elemen yang frekuensi munculnya lebih dari satu kali */
/* Pembuat          : Raka Maulana Yusuf - 24060122140119 */
/*Tanggal Pembuatan	: 19 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int T[1000], X[1000];
    int N , i, j, hitung = 0;

    /* Algoritma */
    printf("Masukan nilai N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        printf("Masukan nilai T[%d]: ",i);
        scanf("%d",&T[i]);
        X[i] = 1;
    }    
    for (i = 0; i < N; i++){
        hitung = 1;
        for (j = i+1 ; j < N; j++){
            if (T[i] == T[j]){
                hitung++;
                X[j] = 0;
            }            
        }
        if (X[i] != 0 ){
            X[i] = hitung;
        }
    }
    for (i = 0; i < N; i++){
        if (X[i] > 1){
            printf("%d ", T[i]);
        }
    }
    return 0;
}