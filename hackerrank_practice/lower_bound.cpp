/**
 *  @file lower_bound.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail@gmail.com)
 *  @brief Usage of lower bound
 *  @version 0.1
 *  @date 12-07-2020
 *
 *  You are given n integers in sorted order. Also, you are given q queries. In each query, 
 *  you will be given an integer and you have to tell whether that integer is present in the array. 
 *  If so, you have to tell at which index it is present and if it is not present, you have to tell 
 *  the index at which the smallest integer that is just greater than the given number is present.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, temp;
    cin >> n;

    vector<int> val;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        val.push_back(temp);
    }

    int q, idy;
    cin >> q;

    vector<int>::iterator low;

    for (int i=0; i<q; i++){
       cin >> idy;
       low = lower_bound(val.begin(), val.end(), idy);
       if (val[low - val.begin()] == idy)
           cout << "Yes " << (low - val.begin()+1) << endl;
       else
           cout << "No " << (low - val.begin()+1) << endl;
   }

    return 0;
}

