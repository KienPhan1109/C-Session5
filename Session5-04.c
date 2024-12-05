#include <stdio.h>

int main(){
    int n, i;
    while (n < 1 || n > 10)
    {
        printf("Nhập vào một số từ 1 đến 10: ");
        scanf("%d", &n);
    }
    for (i = 1 ; i <= 10 ; i++){
        printf("%d" " * " "%d" " = " "%d\n", i, n, i * n);
    }
}