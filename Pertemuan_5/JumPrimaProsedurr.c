/* Nama File    : 2_JumPrimaProsedurr.c */
/* Deskripsi    : Membuat sub program prosedur tentang jumlah deret bilangan prima */
/* Pembuat      : Raka Maulana Yusuf - 24060122140119 */
/* Tanggal      : 26 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

void SumPrime(int N){
    /*Kamus*/
    int i, j, faktor, sum = 0;

    /* Algoritma */
    if (N > 0){
        for ( i = 1; i <= N; i++){
            faktor = 0;
            for ( j = 1; j <= i; j++){
                if (i % j == 0){
                    faktor ++;
                }
            }
            if (faktor == 2){
                if (i==2){
                    printf("%d",i);
                }else{
                    printf("+%d",i);
                }
                sum = sum + i;
            } 
        }
        printf("Dengan jumlahan deret bilagannya adalah Sn =%d\n", sum); // Menampilkan jumlah dari bilangan prima
    }else{
        printf("Tidak ada bilangan prima, sehingga jumlah Sn = 0 ");
    }
}

int main()
{
    /* Kamus */
    int N;

    /* Algoritma */
    printf("Masukan nilai N: ");
    scanf("%d",&N);

    SumPrime(N);

    return 0;
}
