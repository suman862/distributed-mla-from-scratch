#include <stdio.h>
// pointer to pointer = a variable that stores the address of another pointer variable


int main() {
    int x=22; // both works *ptr and int* ptr =&x
    int *ptr=&x;
    int **ptr2= &ptr;
    int ***ptr3=&ptr2;
  
    printf("The value of x is %d\n",x);
    printf("The address of x is %p\n",ptr);
    printf("The value inside that address is %d\n",*ptr);
    printf("The address of ptr2   %p\n",&ptr2);
    printf("The value inside that address is %d\n",**ptr2);
    printf("The address of ptr3 %p\n",&ptr3);
    printf("The value inside that address is %d\n",***ptr3);
   

    return 0;
}