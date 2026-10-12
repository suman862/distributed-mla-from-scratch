#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 22;
    int *ptr = &x; // Now ptr points to x, so it is NOT NULL
    
    printf("The value of x is: %d\n", *ptr); // Safe to dereference

    // Now let's do dynamic memory allocation
    ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("The dynamic memory allocation has failed\n");
        return 1; // Return an error code
    }

    // Always free dynamically allocated memory
    free(ptr);

    return 0;
}