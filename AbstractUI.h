//
// Created by letsp on 06.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_ABSTRACTUI_H
#define PG2_DUNGEON_CRAWLER_ABSTRACTUI_H
#include "Level.h"
class DungeonCrawler;

class AbstractUI {
public:

    virtual void draw(Level*) = 0;

    DungeonCrawler* getDungeonCrawler() const;

    void setDungeonCrawler(DungeonCrawler* dungeonCrawler);



protected:
     DungeonCrawler* dungeonCrawler;

};


#endif //PG2_DUNGEON_CRAWLER_ABSTRACTUI_H
