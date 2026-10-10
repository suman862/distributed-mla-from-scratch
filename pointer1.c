//pointer =variable that stores the adress of another variable

#include <stdio.h>

int main() {
    int x= 10;
    int* ptr  =&x;
    printf("The value of x is %d\n",x);
    printf("The address of x is %p\n",ptr);
    printf("The value inside that address is %d\n",*ptr);
    return 0;
}