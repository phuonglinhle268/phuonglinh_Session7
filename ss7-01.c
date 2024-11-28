#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}
