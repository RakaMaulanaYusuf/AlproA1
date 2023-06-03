/* Nama File    : BubleSort.c */
/* Deskripsi    : Mengurutkan tabel integer secara descending menggunakan metode bublesort*/
/* Pembuat      : Raka Maulana Yusuf - 24060122140119 */
/*Tanggal       : 2 Juni 2023*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int T[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (T[j] < T[j+1]) {
                temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
    }
}
int main() {
    /*Kamus*/
    int n;
    int T[100];
    int i;
    /*T = [19 1 28 5 6 10 11 3 7 20]*/

    /*Algoritma*/
    printf("Masukan nilai N: ");
    scanf("%d",&n);

    for (i = 0; i < n ; i++){
        printf("Masukan nilai T[%d]: ",i);
        scanf("%d",&T[i]);
    }

    printf("Sebelum sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    bubbleSort(T, n);

    printf("\nSetelah sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
