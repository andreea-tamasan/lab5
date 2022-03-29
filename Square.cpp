//
// Created by Home on 15.03.2022.
//
#include "Square.h"
#include <iostream>
#include <math.h>
using namespace std;
Square::Square() {
    this->x1= 0.0;
    this->x2= 0.0;
    this->y1= 0.0;
    this->y2= 0.0;
}

Square::Square(float x1, float y1, float x2, float y2){
    this->x1 =x1;
    this->y1 =y1;
    this->x2 =x2;
    this->y2 =y2;
}

void Square::set_coordinates(float a, float b, float c, float d) {
    this -> x1= a;
    this -> x2= b;
    this -> y1= c;
    this -> y2= d;
}

Square::Square(const Square& S){
    this->x1 = S.x1;
    this->y1 = S.y1;
    this->x2 = S.x2;
    this->y2 = S.y2;
}
float Square::get_x1() {
    return this->x1;
}

float Square::get_y1() {
    return this->y1;
}

float Square::get_x2() {
    return this-> x2;
}

float Square::get_y2() {
    return this->y2;
}

float Square::get_Length(){
    return abs(x2-x1);
}

float Square::calculate_perimeter(){
    return get_Length()*4;
}

float Square::calculate_area(){
    return get_Length()*get_Length();
}

float Square::diagonal(){
    return sqrt(2*(get_Length()*get_Length()));
}

Square::~Square(){
    if(get_Length() != 0.0){
        this->x1=0.0;
        this->x2=0.0;
        this->y1=0.0;
        this->y2=0.0;
    }
}

Square& Square::operator=(const Square& S){
    this->x1=S.x1;
    this->x2=S.x2;
    this->y1=S.y1;
    this->y2=S.y2;
    return *this;
}

bool Square::operator==(const Square& S){
    return (this->x1==S.x1)&&(this->x2==S.x2)&&(this->y1==S.y1)&&(this->y2==S.y2);

}

std::ostream &operator<<(ostream &os, const Square &sqr) {
    os <<"x down left: "<< sqr.x1 <<endl<<"y down left: "<< sqr.y1 <<endl<<"x up right: "<< sqr.x2 <<endl<<"y up right: "<<sqr.y2;
    return os;
}


