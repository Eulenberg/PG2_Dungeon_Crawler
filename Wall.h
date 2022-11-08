//
// Created by letsp on 04.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_WALL_H
#define PG2_DUNGEON_CRAWLER_WALL_H

#include "Tile.h"


class Wall : public Tile {

public:
    Wall();
    Wall( int row, int column, bool isOccupied, Character* character);
    ~Wall() override;

    Tile* onEnter(Tile* fromTile, Character* who) override;

    Tile* onLeave(Tile* destTile, Character* who) override;




};


#endif //PG2_DUNGEON_CRAWLER_WALL_H
