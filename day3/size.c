#include <stdio.h>

#include <stdlib.h>

int main() {
    int arr[]={1,4,6,8,90};

    size_t size=sizeof(arr)/sizeof(arr[1]);
    printf("The size of the arr:%zu\n",sizeof(arr));
    printf("The size of the array is %zu\n",size);
    return 0;
}