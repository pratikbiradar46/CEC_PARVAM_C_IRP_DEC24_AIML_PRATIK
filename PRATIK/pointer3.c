#include <stdio.h>

int main() {
    int num = 5;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("Value of num = %d\n", num);
    printf("Value using pointer to pointer = %d\n", **ptr2);

    return 0;
}
