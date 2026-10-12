#include <stdio.h>

//void pointer = a variable that stores the address of another variable and can point to any data of any data type

int main() {
    int x= 22;
    float y= 22.5;
    void* ptr1= &x;
    void* ptr2= &y;
    printf("The value of x is %d\n",*(int*)ptr1);

    printf("The value of y is %f\n",*(float*)ptr2);
    return 0;
}