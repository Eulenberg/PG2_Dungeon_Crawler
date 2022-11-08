//
// Created by letsp on 04.11.2022.
//

#include "Tile.h"
#include "Character.h"

// getter
std::string Tile::getTexture() const {
    if (character == nullptr) {
        return texture;
    }
    return character->getTexture();
}

Character* Tile::getCharacter() const {
    return character;
}

int Tile::getRow() const {
    return row;
}

int Tile::getColumn() const {
    return column;
}

//setter
void Tile::setCharacter(Character* pCharacter) {
    Tile::character = pCharacter;
}


// Standardkonstruktor
Tile::Tile() : texture{" "}, row{0}, column{0}, canMoved{false},isOccupied {false}, character{nullptr} {}

Tile::Tile(const std::string& texture, bool canMoved, Character* character)
        : texture{texture}, row{0}, column{0}, canMoved{canMoved},isOccupied {false}, character{character} {

}

Tile::Tile(const std::string& texture, const int row, const int column, bool canMoved, bool isOccupied,
           Character* character)
        : texture{texture}, row{row}, column{column}, canMoved{canMoved}, isOccupied{isOccupied}, character{character} {

}


bool Tile::moveTo(Tile* destTile, Character* who) {


    if (onLeave(this, who) != nullptr) {

        if (destTile->onEnter(destTile, who) != nullptr) {



            this->setCharacter(nullptr);
            who->setCurrentTile(destTile->onEnter(this, who));
            destTile->onEnter(this, who)->setCharacter(who);





            setIsOccupied(false);
            destTile->setIsOccupied(true);
            return true;
        }
    }
    return false;
}


bool Tile::getCanMoved() const {
    return canMoved;
}

bool Tile::getIsOccupied() const {
    return isOccupied;
}

void Tile::setIsOccupied(bool occupied) {
    Tile::isOccupied = occupied;
}

void Tile::deleteTile() {

    delete this;

}

Tile::~Tile() {

}















