#include <stdio.h>
 int main(){
    int i, n, sum;
    printf("Nhập vào số nguyên dương: ");
    scanf("%d", &n);
    for (i = 1 ; i <= n; i++){
        sum += i;
    }
    printf("Tổng các số từ 1 đến %d là: %d", n, sum);
 }