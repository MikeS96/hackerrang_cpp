#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
/* fill a vector of vectors and print que values queried by the user */

int main()
{
    // instantiate vector object of type vector<int>
    vector<vector<int>> mat;
    // Read the number of vectors and the values which will be queried
    int n, q;
    cin >> n >> q;

    // resize the vector to n elements of type vector<int>, each having size q
    //mat.resize(n, vector<int>(q));

    int k;
    int temp_vals;

    // Fill the vector of vectors matrix
    for (int i = 0; i < n; i++)
    {
        // k variable with number of elements per row or vector
        cin >> k;
        // construct a vector of int
        vector<int> v;

        for (int j = 0; j < k; j++)
        {
            // Receive values
            cin >> temp_vals;
            v.push_back(temp_vals);
        }
        // push back above one-dimensional vector
        mat.push_back(v);
    }

    int row, column; 
    // print the element in the row and column specified by the user
    for(int i = 0; i < q; i++)
    {
        cin >> row >> column;
        cout << mat[row][column] << endl;
    }


    // print the vector

    return 0;
}
