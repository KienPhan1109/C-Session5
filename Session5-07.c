#include <stdio.h>

int main(){
    int i, a, b, ucln, temp;
    printf("Nhập vào số thứ 1: ");
    scanf("%d", &a);
    printf("Nhập vào số thứ 2: ");
    scanf("%d", &b);
    if (a < 0 || b < 0) {
    {
        printf("Số bạn nhập không phải số nguyên dương");
    }
    
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    ucln = a;
    printf("Ước chung lớn nhất của hai số là: %d", ucln);
}