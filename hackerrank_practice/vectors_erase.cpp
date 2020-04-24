#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
*/ 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // Number of elements in the vector
    cin >> n;

    vector<int> values;

    int temp;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        values.push_back(temp);
    }

    int first_query;

    cin >> first_query;

    values.erase(values.begin()+first_query - 1);

    int first_value, second_value;

    cin >> first_value >> second_value;

    values.erase(values.begin()+first_value-1,values.begin()+second_value-1);

    cout << values.size() << endl;

    for(int i = 0; i < values.size(); i++)
    {
        cout << values.at(i) << " ";
    }


    return 0;
}

