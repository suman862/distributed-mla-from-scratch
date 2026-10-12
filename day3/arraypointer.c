#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int *ptr= arr;
    int *ptr2=&arr[2];
    printf("The value of arr[0] is %p\n",ptr);
    printf("The value of arr[2] is %p\n",ptr2);
    return 0;
}