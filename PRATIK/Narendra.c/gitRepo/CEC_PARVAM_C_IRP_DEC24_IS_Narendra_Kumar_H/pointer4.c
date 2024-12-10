#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("The elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);  // Free the dynamically allocated memory
    return 0;
}
