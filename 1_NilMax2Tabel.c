/* Nama File        : 1_NilMax2Tabel.c */
/* Deskripsi        : Menampilkan di layar nilai maksimum ke 2 dari tabel yang berisi bilangan integer sembarang */
/* Pembuat          : Raka Maulana Yusuf - 24060122140119 */
/*Tanggal Pembuatan :17 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int N, i, max1 = 0, max2 = 0, T[100]; 

    /* Algoritma */
    printf("Masukan nilai N: ");
    scanf("%d",&N);

    for (i = 0; i < N; i++){
        printf("T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (i = 0; i < N; i++){
        if (T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }else if (T[i] == max1){
            max1 = T[i];
        }else if (T[i] > max2){
            max2 = T[i];
        }        
    }
    printf("NILAI TERBESAR KE2 : %d", max2);
    return 0;
}