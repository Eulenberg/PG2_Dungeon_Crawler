//
// Created by letsp on 04.11.2022.
//

#include "Portal.h"




Portal::Portal() :Tile("0"), destination{nullptr}{

}
Portal::Portal(const int row, const int column, bool isOccupied, Character* character)
:Tile{"0", row, column, true, isOccupied, character }, destination{nullptr}
{

}



// TODO Potential Teleport Function
//        this->getDestination()->setCharacter(who);
//        fromTile->setCharacter(nullptr);
//
Tile* Portal::onEnter(Tile* fromTile, Character* who) {
    if ( dynamic_cast<Portal*>(fromTile) != nullptr ){
        return fromTile;
    }
    return destination;
}

Tile* Portal::onLeave(Tile* destTile, Character* who) {

    if ( dynamic_cast<Portal*>(destTile) != nullptr ){
        return destTile;
    }



    return this;
}

Tile* Portal::getDestination() const {
    return destination;
}

void Portal::setDestination(Tile* dest) {
    Portal::destination = dest;
}




