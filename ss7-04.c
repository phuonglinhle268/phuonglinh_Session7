#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d la: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Cac phan tu co la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
