/**
 *  @file arithmetic.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Practice arithmetic operations in C++
 *  @version 0.1
 *  @date 12-23-2020
 */

#include <iostream>
#include <cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = std::pow(cubeSide, 3);
    volSphere = (4.0 / 3.0) * M_PI * std::pow(sphereRadius, 3); 
    volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight / 3.0);
    
    std::cout << "The Volume of the Cube is : " << volCube << "\n";
    std::cout << "The Volume of the Sphere is : " << volSphere << "\n";
    std::cout << "The Volume of the Cone is : " << volCone << "\n";
    
    return 0;
}
