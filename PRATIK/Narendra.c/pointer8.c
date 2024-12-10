#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer arithmetic example:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, *(ptr + i));
    }

    return 0;
}
