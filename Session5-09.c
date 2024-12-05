#include <stdio.h>

int main(){
    float a, b, c, tong, trungbinh, max, min;
    int luachon, nhap = 0;
    while (luachon != 6)
    {
        printf("MENU\n");
        printf("\n");
        printf("1. Nhập 3 số\n");
        printf("2. Tổng 3 số\n");
        printf("3. Trung bình cộng 3 số\n");
        printf("4. Số nhỏ nhất\n");
        printf("5. Số lớn nhất\n");
        printf("6. Thoát\n");
        printf("\n");
        printf("Lựa chọn của bạn\n");
        scanf("%d", &luachon);
        if (luachon == 6){
            return 0;
        }
        if (luachon != 1 && nhap == 0){
            printf("Bạn chưa nhập vào 3 số\n");
        }
        else
        {
            nhap = 1;
            switch (luachon){
                case 1:
                    printf("Nhập số thứ 1: "); scanf("%f", &a);
                    printf("Nhập số thứ 2: "); scanf("%f", &b);
                    printf("Nhập số thứ 3: "); scanf("%f", &c);
                    break;
                case 2:
                    tong = a + b + c;
                    printf("Tổng 3 số là: %.2f\n", tong);
                    break;
                case 3:
                    trungbinh = (a + b + c) / 3;
                    printf("Trung bình cộng của 3 số là: %.2f\n", trungbinh);
                    break;
                case 4:
                    if (a < b && a < c)
                    {
                        min = a;
                    }
                    else if (b < a && b < c)
                    {
                        min = b;
                    }
                    else
                    {
                        min = c;
                    }
                    printf("Số nhỏ nhất là: %.2f\n", min);
                    break;
                case 5:
                    if (a > b && a > c)
                    {
                        max = a;
                    }
                    else if (b > a && b > c)
                    {
                        max = b;
                    }
                    else
                    {
                        max = c;
                    }
                    printf("Số lớn nhất là: %.2f\n", max);
                    break;  
                default:
                    printf("Không có lựa chọn này vui lòng nhập lại\n");
                    break;
            }
        }
    }
    return 0;
}