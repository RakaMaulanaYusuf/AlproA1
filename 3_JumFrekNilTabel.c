/* Nama File        : 3_JumFrekTabel.c */
/* Deskripsi        : Menghitung dan menampilkan jumlah nilai elemen frekuensi yang muncul lebih dari satu kali */
/* Pembuat          : Raka Maulana Yusuf - 24060122140119 */
/*Tanggal Pembuatan	: 19 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i, N, j, Jumlah = 0, hitung;
    int T[100];
    /* Algoritma */
    printf("Masukan nilai N: ");
    scanf("%d",&N);

    for (i = 0; i < N; i++){
        printf("Masukan niali T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (i = 0; i < N; i++){
        hitung = 1;
        for (j = i+1; j < N; j++){
            if(T[i] != 0 && T[i] == T[j]){
                hitung = hitung+1;
                T[j] = 0;
            }
        }
        if (hitung > 1){
            Jumlah = Jumlah + hitung * T[i];
        } 
    }
    printf("Jumlah nilai frekuensi: ");
    printf("%d", Jumlah);
    return 0;
}