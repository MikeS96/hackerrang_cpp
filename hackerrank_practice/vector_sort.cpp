/**
 *  @file vectors_sort.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail@gmail.com)
 *  @brief Sorting a vector
 *  @version 0.1
 *  @date 07-26-2020
 *
 *  task: Sort the given vector using the built-in method
 */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> list;
    int n;
    cin >> n;

    while(cin >> n) list.push_back(n);
    sort(list.begin(), list.end());
    for(auto n : list) cout << n << " ";
    return 0;
}

