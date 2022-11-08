//
// Created by letsp on 04.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_FLOOR_H
#define PG2_DUNGEON_CRAWLER_FLOOR_H

#include "Tile.h"
#include "Portal.h"


class Floor : public Tile {
public:
    Floor();
    Floor(int row, int column, bool isOccupied, Character* character);
    ~Floor() override;

    Tile* onEnter(Tile* fromTile, Character* who) override;

    Tile* onLeave(Tile* destTile, Character* who) override;




};


#endif //PG2_DUNGEON_CRAWLER_FLOOR_H
