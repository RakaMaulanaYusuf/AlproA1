/* Nama File        : 3_JumFrekTabel.c */
/* Deskripsi        : Menghitung dan menampilkan jumlah nilai elemen frekuensi yang muncul lebih dari satu kali */
/* Pembuat          : Raka Maulana Yusuf - 24060122140119 */
/*Tanggal Pembuatan	: 19 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i, N, j, sum = 0, count;
    int T[100];
    /* Algoritma */
    printf("Masukan nilai N: ");
    scanf("%d",&N);

    for (i = 0; i < N; i++){
        printf("Masukan niali T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (i = 0; i < N; i++){
        count = 1;
        for (j = i+1; j < N; j++){
            if(T[i] != 0 && T[i] == T[j]){
                count = count+1;
                T[j] = 0;
            }
        }
        if (count > 1){
            sum = sum + count * T[i];
        } 
    }
    printf("Jumlah nilai frekuensi: ");
    printf("%d", sum);
    return 0;
}