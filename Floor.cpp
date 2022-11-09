//
// Created by letsp on 04.11.2022.
//

#include "Floor.h"


Floor::Floor() : Tile(".", true) {

}


Floor::Floor(const int row, const int column, bool isOccupied, Character* character) : Tile{".", row, column, true,
                                                                                            isOccupied, character} {}



Tile* Floor::onEnter(Tile* fromTile, Character* who) {

    return this;


}

Tile* Floor::onLeave(Tile* destTile, Character* who) {
    return this;
}




