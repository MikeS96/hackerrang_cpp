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
