#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        int number;
        printf("Nhap so le thu %d: ", i + 1);
        while (1) {
            scanf("%d", &number);
            if (number % 2 != 0) {
                arr[i] = number;  
                break; 
            } else {
                printf("Khong phai so le. Hay nhap lai: ");
            }
        }
    }
    printf("Day so le la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
