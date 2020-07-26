/**
 *  @file inheritance_virtual_functions.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail@gmail.com)
 *  @brief Abstract classes and virtual functions
 *  @version 0.1
 *  @date 07-26-2020
 *
 *  task: Use virtual functions to create a RectangleArea object that inherits from an abstract class Rectangle.
 *  Once both objects are created, use the virtual and overriden function with the same object.
 */

#include <iostream>

using namespace std;

class Rectangle {
public:
    virtual void display() const {
        cout << width << ' ' << height << endl;
    }
    
protected:
    int width;
    int height;
};

class RectangleArea : public Rectangle {
public:
    void display() const override {
        cout << (width * height) << endl;
    }
    
    void read_input() {
        cin >> width >> height;
    }
};



int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
