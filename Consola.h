//
// Created by Home on 22.03.2022.
//

#ifndef LAB4_CONSOLA_H
#define LAB4_CONSOLA_H
#include "Square.h"
/**
 *Options of the program
 */
void Options();
void runMenu(Square v[]);

/**
 * puts the squares in an array
 * @param n - number of squares
 * @param v - list of squares
 */
void readValuesForSquare(int &n,Square v[]);

/**
 * displays the square values in the array
 * @param n - number of squares
 * @param v - array of squares
 */
void printSquares(int &n,Square v[]);

/**
 * gets the largest square in the array
 * @param n - number of squares
 * @param v - array of squares
 * @param maxim - maxim length of the side of a square in the array
 */
void getTheLargestSquare(int n,Square v[],float &maxim);

/**
 *
 * @param n - number of squares
 * @param f - array of squares
 * @param start - start subarray position
 * @param end - end subarray position
 */
void getLongestSubarrayOfEqualSquares(int n,Square f[], int &start, int &end);

/**
 *
 * @param n - number of squares
 * @param v - array of squares
 * @param f - new array to stock the squares which are in Quadran I
 * @param j - iterator for the new array
 */
void checkIfSquareInQuadranI(int n,Square v[],Square f[],int &j);
#endif //LAB4_CONSOLA_H
