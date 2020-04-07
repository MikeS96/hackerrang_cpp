#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int integer;
    long long_integer;
    char character;
    float float_value;
    double long_float;

    scanf("%i %li %c %f %lf", &integer, &long_integer, &character, &float_value, &long_float);

    printf("%i \n" , integer);
    printf("%li \n", long_integer);
    printf("%c \n", character);
    printf("%f \n", float_value);
    printf("%lf \n", long_float);

    return 0;
}

