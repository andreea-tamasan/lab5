//
// Created by Home on 22.03.2022.
//
#include "Repository.h"

Repo::Repo() {
    this->squares = vector<Square>();
}

Square Repo::createSquare() {
    return Square();
}

Square Repo::getSquare(int id) {
    return Square();
}

void Repo::addEntity(Square e) {
    return this->squares.push_back(e);
}

Square Repo::getBiggestEntity() {
    return Square();
}

vector<Square> Repo::getMaxEqualEntitiesSequence() {
    return vector<Square>();
}
