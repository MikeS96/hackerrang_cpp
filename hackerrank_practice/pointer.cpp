/**
 *  @file pointer.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail.com)
 *  @brief Usage of pointers
 *  @version 0.1
 *  @date 07-21-2020
 *
 *  task: In order to access the memory address of a variable, we need to prepend it with sign. E.g., &val returns the memory address of val.
 *  This memory address is assigned to a pointer and can be shared among various functions. E.g. will assign the memory address of to pointer. 
 *  To access the content of the memory to which the pointer points, prepend it with a *. For example, *p will return the value reflected by 
 *  and any modification to it will be reflected at the source ().
 */

#include <stdio.h>
#include <cstdlib>


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
