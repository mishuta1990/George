#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>

//The coordinate class role is to hold the X&Y coordinates for a certain player.
class Coordinate
{
private:
    int x;
    int y;
    
public:
    //Constructors
    Coordinate(int new_x, int new_y): x(new_x), y(new_y) { } //Default constructor
    Coordinate(const Coordinate& new_coordinate): x(new_coordinate.x), y(new_coordinate.y) { } // Copy constructor

    //Destructor
    ~Coordinate(){}
     
};   

#endif 
