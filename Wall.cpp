//
// Created by letsp on 04.11.2022.
//

#include "Wall.h"


// Standardkonstruktor
Wall::Wall()
:Tile("#")
{

}
Wall::Wall(const int row, const int column, bool isOccupied, Character* character)
        :Tile{"#",row, column, false, isOccupied, character}
{

}

Wall::~Wall() {



}

Tile* Wall::onEnter(Tile* fromTile, Character* who) {

    return nullptr;
}


Tile* Wall::onLeave(Tile* destTile, Character* who) {

    return this;
}

