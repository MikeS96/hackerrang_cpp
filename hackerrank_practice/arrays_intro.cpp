/**
 *  @file arrays_intro.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Backwards array sorting
 *  @version 0.1
 *  @date 05-15-2020
 *
 *  task: You'll be given an array N of integers and you have to print 
 *	the integers in the reverse order.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int A, B;
    cin >> N;

    int Arr [N];
    for(int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    for(int i = (sizeof Arr) / (sizeof Arr[0]) - 1; i >= 0; i--)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}

