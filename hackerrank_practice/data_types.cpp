/**
 *  @file data_types.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Types of data in C++
 *  @version 0.1
 *  @date 05-15-2020
 *
 *  task: Interact with the different data types in C++
 *  and print them
 */


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
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

