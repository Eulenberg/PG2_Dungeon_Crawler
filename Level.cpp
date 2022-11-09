//
// Created by letsp on 06.11.2022.
//
#include "Level.h"
#include "Tile.h"
#include "Floor.h"
#include "Portal.h"
#include "Wall.h"
#include "Character.h"







Level::~Level() {

   for (std::vector<Tile*>& vec: tileVector) {
        for (Tile*& tile : vec) {

            delete tile;
            tile = nullptr;
        }
    }
    for (Character*& character : characterVector) {

        delete character;
        character = nullptr;
    }
}

Level::Level():maxRow{20},maxColumn{20}, characterVector{}{

    createEmptyLevel(maxRow,maxColumn);
    createCharacter(1, 1);
    createPortals(5, 5 ,5 , 10);

}

Level::Level(const int maxRow, const int maxColumn) :maxRow{maxRow},maxColumn{maxColumn},characterVector{}{

}

Tile* Level::getTile(int row, int col) {
    return tileVector.at(row).at(col);
}

const Tile* Level::getTile(int row, int col) const {
    return tileVector.at(row).at(col);
}



//TODO Ask Prof: Wie wird die Überladene Methode ausgewählt (const nicht const)

void Level::placeCharacter(Character* c, int row, int col) {
    Tile* tempTile = getTile(row, col);
    tempTile->setCharacter(c);
    tempTile->setIsOccupied(true);
    c->setCurrentTile(tempTile);

}

std::vector<std::vector<Tile*>>& Level::getTileVector()  {
    return tileVector;
}

std::vector<Character*>& Level::getCharacterVector() {
    return characterVector;
}

int Level::getMaxRow() const {
    return maxRow;
}

int Level::getMaxColumn() const {
    return maxColumn;
}

void Level::createEmptyLevel(int rows, int columns) {

    for (int i{0}; i <= rows; i++) {

        tileVector.emplace_back(std::vector<Tile*>{});

        for (int j{0}; j <= columns; j++) {
            if (isEdgeTile(rows, columns, i, j)) {

                tileVector.at(i).emplace_back(new Wall(i, j, true, nullptr));

            } else {
                tileVector.at(i).emplace_back(new Floor(i, j, false, nullptr));
            }
        }

    }
}

bool Level::isEdgeTile(int maxRows, int maxColumns, int currentRow, int currentColum) const {
    return isMinEdgeTile(currentRow, currentColum) || isMaxEdgeTile(maxRows, maxColumns, currentRow, currentColum); }

bool Level::isMaxEdgeTile(int maxRows, int maxColumns, int currentRow, int currentColum) const { return (currentRow == maxRows || currentColum == maxColumns); }

bool Level::isMinEdgeTile(int currentRow, int currentColum) const{
    return (currentColum == 0 || currentRow == 0);
}

void Level::createCharacter(int row, int col) {

    characterVector.push_back(new Character());
    placeCharacter(characterVector.at(characterVector.size()-1), row, col);

}

void Level::createPortals(int p1Row, int p1Col, int p2Row, int p2Col) {

    Portal* newPortal1 = new Portal(p1Row,p1Col, false, nullptr);
    Portal* newPortal2 = new Portal(p2Row,p2Col, false, nullptr);
    newPortal1->setDestination(newPortal2);
    newPortal2->setDestination(newPortal1);
    delete tileVector.at(newPortal1->getRow()).at(newPortal1->getColumn());
    delete tileVector.at(newPortal2->getRow()).at(newPortal2->getColumn());
    tileVector.at(newPortal1->getRow()).at(newPortal1->getColumn()) = newPortal1;
    tileVector.at(newPortal2->getRow()).at(newPortal2->getColumn()) = newPortal2;

}



