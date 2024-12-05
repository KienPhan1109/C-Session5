#include <stdio.h>

int main(){
    int n,i;
    printf("Nhập vào n: "); scanf("%d", &n);
    if (n < 0){
        printf("Số nhập vào không hợp lệ");
        return 0;
    }
    while (n != 0){
        i = n % 10;
        printf("%d ", i);
        n = n / 10;
    }
}