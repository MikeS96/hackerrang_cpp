/**
 *  @file classes_objects.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail@gmail.com)
 *  @brief Array of objects and vectors in a class
 *  @version 0.1
 *  @date 06-07-2020
 *
 *  task: Kristen is a contender for valedictorian of her high school.
 *  She wants to know how many students (if any) have scored higher than 
 *  her in the  exams given during this semester.
 * 
 *  Create a class named  with the following specifications:
 *  An instance variable named  to hold a student's  exam scores.
 *  A void input() function that reads  integers and saves them to 
 *  An int calculateTotalScore() function that returns the sum of the student's scores.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{       
    private: 
        // declare private members
        vector<int> scores;
    public:
         // declare public functions
        void input();
        int calculateTotalScore();

};

void Student::input()
    {
        int temp;
        for(int i = 0; i < 5; i++)
        {
            cin >> temp;
            scores.push_back(temp);
        }

    }

int Student::calculateTotalScore()
{
    int sum_of_elems = 0;
    for(vector<int>::iterator it = scores.begin(); it != scores.end(); ++it)
    {
        sum_of_elems += *it;
    }

    return sum_of_elems;
    
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

