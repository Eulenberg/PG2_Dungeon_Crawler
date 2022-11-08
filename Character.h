//
// Created by letsp on 04.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_CHARACTER_H
#define PG2_DUNGEON_CRAWLER_CHARACTER_H

#include <string>
#include "Tile.h"

class Character {

private:

    std::string texture;
    Tile* currentTile;



public:
    Character();
    explicit Character(Tile* tile,const std::string& text ="X");



    std::string getTexture();

    Tile* getCurrentTile() const;
    void setCurrentTile(Tile* currentTile);


};


#endif //PG2_DUNGEON_CRAWLER_CHARACTER_H
