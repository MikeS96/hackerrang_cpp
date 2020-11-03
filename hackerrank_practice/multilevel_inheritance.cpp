/**
 *  @file multilevel_inheritance.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Multi-level Inheritance in C++
 *  @version 0.1
 *  @date 12-07-2020
 *
 *  Task: Create two parent classes that inherits to a child class and use the methods from the parent classes 
 *  in the child object.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout << "I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout << "I am an isosceles triangle\n";
  		}
};

class Equilateral : public Isosceles{
      public:
          void equilateral(){
            cout << "I am an equilateral triangle\n";
          }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

