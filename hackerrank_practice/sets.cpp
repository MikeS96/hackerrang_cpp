#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order.
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;  //queries
    int x, y; // y is the query type and x is the val
    set<int>  s; //Creates a set of integers.

    cin >> q; 

    for(int i = 0; i < q; i++)
    {
        cin >> y >> x;

        if(y == 1) // Add an element x to the set.
        {
            s.insert(x); //Inserts an integer x into the set s.
        }
        else if(y == 2) //  Delete an element x from the set. (If the number x is not            present in the set, then do nothing).
        {
            s.erase(x); //Erases an integer val from the set s.
        }
        else
        {
            set<int>::iterator itr=s.find(x); //Gives the iterator to the element val                if it is found otherwise returns s.end() .

            // Check if iterator points to end or not
            if(itr != s.end())
            {
                // It does not point to end, it means element exists in list
                std::cout<<"Yes"<<std::endl;
            }
            else
            {
                // It points to end, it means element does not exists in list
                std::cout<<"No"<<std::endl;
            }
        }
    }


    return 0;
}




