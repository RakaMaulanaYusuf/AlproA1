/* Nama File    : 1_JumPrimaFungsi.c */
/* Deskripsi    : Membuat sub program fungsi tentang jumlah deret bilangan prima */
/* Pembuat      : Raka Maulana Yusuf - 24060122140119 */
/* Tanggal      : 26 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int i, N, sum = 0;
    printf("Masukkan bilangan n: ");
    scanf("%d", &N);
    
    if (N > 0){
        for (i = 1; i <= N; i++)
        {
            if (isPrime (i)){
                if (sum == 0) {
                    printf("%d",i);
                }else{
                    printf("+%d",i);
                }
                sum = sum + i;
            }            
        }
        printf(" Dengan jumlahan deret bilagannya adalah Sn = %d", sum);   
    }else{
        printf("Tidak ada bilangan prima, sehingga jumlah deretnya Sn = 0 ");
    }
    return 0;
}

