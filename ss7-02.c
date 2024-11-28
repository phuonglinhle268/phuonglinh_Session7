#include <stdio.h>

int main() {
    int numbers[5];
    printf("Hay nhap 5 so nguyen: \n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("cac phan tu do la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
