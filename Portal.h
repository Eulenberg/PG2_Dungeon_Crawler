//
// Created by letsp on 04.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_PORTAL_H
#define PG2_DUNGEON_CRAWLER_PORTAL_H

#include "Tile.h"

class Portal : public Tile {

private:
    Tile* destination;

public:
    Portal();
    Portal(int row, int column, bool isOccupied, Character* character);
    ~Portal() override;

    Tile* getDestination() const;

    void setDestination(Tile* destination);

    Tile* onEnter(Tile* fromTile, Character* who) override;

    Tile* onLeave(Tile* destTile, Character* who) override;


};


#endif //PG2_DUNGEON_CRAWLER_PORTAL_H
