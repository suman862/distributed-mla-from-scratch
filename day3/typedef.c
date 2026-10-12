#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x; 
    float y;
} Point;
 

int main() {
    Point P= {1.1,2.3};
    printf("Size of Point is %zu\n",sizeof(P));
    return 0;
}