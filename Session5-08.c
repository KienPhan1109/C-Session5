#include <stdio.h>

int main(){
    int i, a, a1, b, b1, bcnn, ucln, temp;
    printf("Nhập vào số thứ 1: ");
    scanf("%d", &a);
    a1 = a;
    printf("Nhập vào số thứ 2: ");
    scanf("%d", &b);
    b1 = b;
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
    bcnn = (a1 * b1) / ucln;
    printf("Bội chung nhỏ nhất của hai số là: %d", bcnn);
}