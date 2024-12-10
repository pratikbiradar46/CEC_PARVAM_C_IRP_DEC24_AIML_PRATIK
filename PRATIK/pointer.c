#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assigning addresses of num1 and num2 to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Creating a pointer for the sum
    ptrSum = &sum;

    // Calculating the sum using pointers
    *ptrSum = *ptr1 + *ptr2;

    // Displaying the result
    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptrSum);

    return 0;
}
