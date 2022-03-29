//
// Created by Home on 15.03.2022.
//

#ifndef LAB4_SQUARE_H
#define LAB4_SQUARE_H
#include <iostream>
class Square{
private:
    float x1, x2, y1,y2;
public:
    /**
     * square constructor
     */
    Square();

    /**
     * sets the side of the square
     * @param x1 - coordinates point 1
     * @param y1 - coordinates point 1
     * @param x2 - coordinates point 2
     * @param y2 - coordinates point 2
     */
    Square(float x1, float y1, float x2, float y2);

    /**
     * copy constructor
     * @param S - an object of type Square
     */
    Square(const Square& S);

    /**
     * sets coordinates
     * @params - coordinates of points
     */
    void set_coordinates(float a,float b,float c, float d);

    /**
     * gets the first coordinate of the bottom down point
     * @return the value x of the bottom down point
     */
    float get_x1();

    /**
     * gets the second coordinate of the bottom down point
     * @return the value y of the bottom down point
     */
    float get_y1();

    /**
     * gets the first coordinate of the up right point
     * @return the value x of the up right point
     */
    float get_x2();

    /**
     * gets the second coordinate of the up right point
     * @return the value y of the up right point
     */
    float get_y2();

    /**
     * gets the side length of the square
     * @return side length
     */
    float get_Length();

    /**
     * calculates the perimeter
     * @return perimeter of the square
     */
    float calculate_perimeter();

    /**
     * calculates the area
     * @return area of the square
     */
    float calculate_area();

    /**
     * calculates the diagonal
     * @return the length of the diagonal
     */
    float diagonal();

    /**
     * square destructor
     */
    ~Square();

    /**
     * operator
     * @param S - object of type Square
     * @return the new state of the current object
     */
    Square& operator=(const Square& S);

    /**
     * comparator
     * @param S - object of type Square
     * @return true or false
     */
    bool operator==(const Square& S);

    /**
     * operator of ofstream
     * @return the values of coordinates
     */
    friend std::ostream& operator<<(std::ostream& os, const Square& sqr);
};
#endif //LAB4_SQUARE_H
