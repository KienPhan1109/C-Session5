#include <stdio.h>

int main(){
    int n=1, i;
    while (n != 10){
        for (i = 1 ; i <= 10 ; i++){
            printf("%d" " * " "%d" " = " "%d\n", i, n, i * n);
        }
        printf("\n");
        n++;
    }  
}