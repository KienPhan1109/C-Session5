#include <stdio.h>

int main(){
    float a, b, tong, hieu, tich, thuong;
    int luachon;
    printf("Nhập số thứ 1: ");
    scanf("%f", &a);
    printf("Nhập số thứ 2: ");
    scanf("%f", &b);
    while (luachon != 5)
    {
        printf("CALCULATOR\n");
        printf("\n");
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Thoát\n");
        printf("\n");
        printf("Lựa chọn của bạn\n");
        scanf("%d", &luachon);
        switch (luachon){
            case 1:
                tong = a + b;
                printf ("Tổng 2 số là: %.2f\n", tong);
                break;
            case 2:
                hieu = a - b;
                printf ("Hiệu 2 số là: %.2f\n", hieu);
                break;
            case 3:
                tich = a * b;
                printf ("Tích 2 số là: %.2f\n", tich);
                break;
            case 4:
                thuong = a / b;
                printf ("Thương 2 số là: %.2f\n", thuong);
                break;
            default:
                printf("Không có lựa chọn này vui lòng nhập lại\n");
                break;
        }
    }
}