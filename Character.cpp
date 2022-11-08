//
// Created by letsp on 04.11.2022.
//

#include "Character.h"


Character::Character():texture{"X"}, currentTile{nullptr} {

}

Character::Character( Tile* tile,const std::string& text) :  currentTile{tile}, texture{text} {}

std::string Character::getTexture() {

    return texture;

}

Tile* Character::getCurrentTile() const {
    return currentTile;
}

void Character::setCurrentTile(Tile* curTile) {
    Character::currentTile = curTile;
}








