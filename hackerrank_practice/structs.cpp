/**
 *  @file structs.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail.com)
 *  @brief Struct Student
 *  @version 0.1
 *  @date 08-07-2020
 *
 *  task: struct is a way to combine multiple fields to represent a
 *  composite data structure, which further lays the foundation 
 *  for Object Oriented Programming. 
 *  For example, we can store details related to a student in a struct 
 *  consisting of his age (int), first_name (string), last_name (string)
 *  and standard (int).
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

