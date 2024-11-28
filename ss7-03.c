#include <stdio.h>

int main() {
    int numbers[5] = {1, 13, 2006, 48, 95};
    int odds = 0; 
    printf("Cac so chan la: ");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {  
            printf("%d ", numbers[i]);
            odds = 1;  
        }
    }
    if (odds == 0) {
        printf("Khong co so chan.\n");
    }

    return 0;
}
