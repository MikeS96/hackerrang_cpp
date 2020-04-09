#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int max_val = 0;
    int values [4] = {a, b, c, d}; 

    // Size of finds the number of bytes in the array. so an array of 4 integers
    // has sizeof = 16 and the size of 1 integer is 4, therefore, the size 
    //of the array is 4

    for(int i = 0; i < (sizeof values) / (sizeof values[0]); i++)
    {
        if(max_val < values[i])
        {
            max_val = values[i];
        }
    }

    return max_val;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
