/**
 *  @file sets.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Usage of sets method in C++
 *  @version 0.1
 *  @date 07-04-2020
 *  
 *  Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order.
 *
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    //queries
    int q;
     // y is the query type and x is the val
    int x, y;
    //Creates a set of integers.
    set<int>  s; 

    cin >> q; 

    for(int i = 0; i < q; i++)
    {
        cin >> y >> x;
        // Add an element x to the set.
        if(y == 1) 
        {
            // Inserts an integer x into the set s.
            s.insert(x); 
        }
        // Delete an element x from the set. (If the number x is not present in the set, then do nothing).
        else if(y == 2) 
        {
            //Erases an integer val from the set s.
            s.erase(x); 
        }
        else
        {
            //Gives the iterator to the element val if it is found otherwise returns s.end() .
            set<int>::iterator itr=s.find(x); 

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




