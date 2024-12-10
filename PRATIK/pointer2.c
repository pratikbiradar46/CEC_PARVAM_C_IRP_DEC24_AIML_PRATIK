#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50,60,70,80,90,100};
    int *ptr = arr;

    printf("Array elements using pointer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
