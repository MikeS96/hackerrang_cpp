#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    vector<int> list;
    int n;
    cin >> n;

    while(cin >> n) list.push_back(n);
    sort(list.begin(), list.end());
    for(auto n : list) cout << n << " ";
    return 0;
}

