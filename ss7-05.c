#include <stdio.h>

int main() {
   int numbers[5] = {5, 10, 15, 20, 25};
    int max = numbers[0];  
    int min = numbers[0]; 
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];  // C?p nh?t giá tr? l?n nh?t
        }
        if (numbers[i] < min) {
            min = numbers[i]; 
        }
    }
    printf("Phan tu lon nhat la: %d\n", max);
    printf("Phan tu nho nhat la: %d\n", min);

    return 0;
}
