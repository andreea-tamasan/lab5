//
// Created by Home on 17.03.2022.
//
#include <iostream>
#include "Tests.h"
#include "Square.h"
#include "Consola.h"
#include "assert.h"
#include <math.h>

void test_Constr(){
    Square S;
    assert(S.get_Length() == 0.0);
}

void test_Setter(){
    Square S;
    S.set_coordinates(2,4,3,5);
    assert(S.get_Length()==2.0);
}

void test_Constr_2(){
    Square S(2,3,4,5);
    assert(S.get_Length() == 2.0);
}

void test_CalculatePerimeter(){
    Square S;
    S.set_coordinates(2,4,3,5);
    assert(S.calculate_perimeter() == 8.0);
}

void test_calculateArea(){
    Square S;
    S.set_coordinates(2,4,3,5);
    assert(S.calculate_area() == 4.0);
}

void test_Operations(){
    Square S1(2,3,4,5);
    Square S2(5,6,7,8);
    Square S3(1,1,1,1);
    S3=S2;
    assert(S3.get_Length() == 2.0);

    assert(!(S1 == S2));
    assert(S3 == S2);

    //std::cout<<(S1);

}
 void test_getTheLargestSquare(){
    Square S1(1,1,3,3);
    Square S2(1,1,4,4);
    Square S3(1,1,4,4);
    int m = 3;
    float maxim= 0.0;
    Square a[3] = {S1,S2,S3};
    getTheLargestSquare(m,a,maxim);
    assert(maxim == 3);
}

void test_checkIfSquareInQuadranI(){
    Square S1(1,1,3,3);
    Square S2(-1,-1,4,4);
    Square S3(1,1,4,4);
    int n=3;
    int j=0;
    Square a[3] = {S1,S2,S3};
    Square a2[2];
    checkIfSquareInQuadranI(n,a,a2,j);
    assert(a2[0]==S1);
    assert(a2[1]==S3);
}

void test_getLongestSubarrayOfEqualSquares(){
    int start,end;
    Square S1(1,1,3,3);
    Square S2(1,1,4,4);
    Square S3(1,1,4,4);
    int n=3;
    Square a[3] = {S1,S2,S3};
    getLongestSubarrayOfEqualSquares(n,a,start,end);
    assert(start == 1);
    assert(end == 2);
}

void Tests(){
    test_Constr();
    test_Setter();
    test_Constr_2();
    test_CalculatePerimeter();
    test_calculateArea();
    test_Operations();
    test_getTheLargestSquare();
    test_getLongestSubarrayOfEqualSquares();
    test_checkIfSquareInQuadranI();
}