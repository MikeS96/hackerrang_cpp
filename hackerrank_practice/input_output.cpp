/**
 *  @file input_output.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief User input and vectors
 *  @version 0.1
 *  @date 05-15-2020
 *
 *  task: Read user data, store it in a Vector and print the total sum.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> myvector;

    int sum = 0;
    int a, b, c;  

    cin >> a >> b >> c;
    
    myvector.push_back (a);
    myvector.push_back (b);
    myvector.push_back (c);

    while (!myvector.empty())
    {
        sum+=myvector.back();
        myvector.pop_back();
    }

    cout << a + b + c << endl;

    return 0;
}
