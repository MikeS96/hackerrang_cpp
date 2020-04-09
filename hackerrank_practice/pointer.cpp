#include <stdio.h>
#include <cstdlib>

/* In order to access the memory address of a variable, , we need to prepend it with sign. E.g., &val returns the memory address of .

This memory address is assigned to a pointer and can be shared among various functions. E.g. will assign the memory address of to pointer . To access the content of the memory to which the pointer points, prepend it with a *. For example, *p will return the value reflected by and any modification to it will be reflected at the source ().
*/

void update(int *a,int *b) {
    int copy_a = *a;
    int copy_b = *b;
    *a = copy_a + copy_b;
    *b = abs(copy_a - copy_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
