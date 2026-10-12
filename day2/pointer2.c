#include <stdio.h>
// pointer= a variable that stores the address of another variable
int main() {
    int x=22;
    int* ptr = &x;
    printf("The value of x is %d\n",x);
    printf("The address of x is %p\n",ptr);
    return 0;
}
