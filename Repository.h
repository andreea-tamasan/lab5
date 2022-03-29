//
// Created by Home on 22.03.2022.
//

#ifndef LAB4_REPOSITORY_H
#define LAB4_REPOSITORY_H
#include <vector>
#include "Square.h"
using namespace std;
class Repo{
private:
    vector<Square> squares;
public:
    /**
     * Constructor
     */
    Repo();

    /**
     * Creates an entity object
     * @return the entity object
     */
    Square createSquare();

    /**
     * Gets an entity by id
     * @param id - the entity id
     * @return the entity
     */
    Square getSquare(int id);

    /**
     * Adds an entity to the repo
     * @param e
     */
    void addEntity(Square e);

    /**
     * Returns the biggest entity from the repo
     * Compares entities using operator==
     * @return the biggest entity
     */
    Square getBiggestEntity();

    /**
     * Returns the maximal sequence of equal entities
     * Assumes entities are ordered by ID
     * @return a vector of equal entities
     */
    vector<Square> getMaxEqualEntitiesSequence();
};

#endif //LAB4_REPOSITORY_H
