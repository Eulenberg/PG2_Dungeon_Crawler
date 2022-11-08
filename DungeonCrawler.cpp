//
// Created by letsp on 04.11.2022.
//

#include "DungeonCrawler.h"
#include "AbstractUI.h"
#include "Tile.h"
#include "Character.h"



void DungeonCrawler::setCurrentAbstractUI(AbstractUI* currAbstractUI) {
    currentAbstractUI = currAbstractUI;
}

void DungeonCrawler::setCurrentLvl(Level* currLvl) {
    DungeonCrawler::currentLvl = currLvl;
}

void DungeonCrawler::turn(int movingDir) {

    Tile* currentTile{currentLvl->getCharacterVector().at(0)->getCurrentTile()};
    Tile* nextTile{nullptr};
    Character* currentChar{currentLvl->getCharacterVector().at(0)};



    switch (movingDir) {
        //move down and left
        case 1:{
            if ((currentTile->getRow() < currentLvl->getMaxRow()) && (currentTile->getColumn()  > 0 )){
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() +1).at(currentTile->getColumn()-1);

                currentTile->moveTo(nextTile, currentChar);
            } break;

        }
        //move down
        case 2:{
            if (currentTile->getRow() < currentLvl->getMaxRow()) {
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() + 1).at(currentTile->getColumn());
                currentTile->moveTo(nextTile, currentChar);

            }

            break;
        }

        case 3:{
            if ((currentTile->getRow() < currentLvl->getMaxRow()) && (currentTile->getColumn()  < currentLvl->getMaxColumn())) {
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() + 1).at(currentTile->getColumn()+1);
                currentTile->moveTo(nextTile, currentChar);
            } break;
        }

        //move left
        case 4:{
            if (currentTile->getColumn()  > 0 ){
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() ).at(currentTile->getColumn()-1);
                currentTile->moveTo(nextTile, currentChar);
            }
            break;}

        //stand still
        case 5:{
            break;
        }


        //move right
        case 6:{
            if (currentTile->getColumn()  < currentLvl->getMaxColumn() ){
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() ).at(currentTile->getColumn()+1);
                currentTile->moveTo(nextTile, currentChar);

            }

            break;
        }

        case 7:{
            if ((currentTile->getColumn()  > 0 ) && (currentTile->getRow() > 0)){
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() -1 ).at(currentTile->getColumn()-1);
                currentTile->moveTo(nextTile, currentChar);
            }
            break;}



        //move up
        case 8:{
            if (currentTile->getRow() > 0) {
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() - 1).at(currentTile->getColumn());
                currentTile->moveTo(nextTile, currentChar);

            }
            break;
        }

        case 9:{
            if ((currentTile->getRow() > 0) &&(currentTile->getColumn()  < currentLvl->getMaxColumn()) ) {
                nextTile = currentLvl->getTileVector().at(currentTile->getRow() - 1).at(currentTile->getColumn()+1);
                currentTile->moveTo(nextTile, currentChar);

            }
            break;
        }
        case 0:

        {exit(0);}

        default:{
            break;
        }

        
    }

}

DungeonCrawler::DungeonCrawler() : currentLvl{nullptr}, currentAbstractUI{nullptr}
{

}

DungeonCrawler::DungeonCrawler(AbstractUI* abstractUI, Level* level) :currentAbstractUI{abstractUI}, currentLvl{level}
{
    DungeonCrawler::currentAbstractUI->setDungeonCrawler(this);
}
