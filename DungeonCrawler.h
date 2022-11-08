//
// Created by letsp on 04.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_DUNGEONCRAWLER_H
#define PG2_DUNGEON_CRAWLER_DUNGEONCRAWLER_H
#include <string>

class Tile;
class Level;
class Character;
class AbstractUI;


class DungeonCrawler {

public:
    DungeonCrawler();
    DungeonCrawler(AbstractUI*, Level*);

    void setCurrentAbstractUI(AbstractUI* currentAbstractUI);
    void setCurrentLvl(Level* currentLvl);
    void turn(int movingDir);





private:
    AbstractUI* currentAbstractUI;
    Level* currentLvl;





};


#endif //PG2_DUNGEON_CRAWLER_DUNGEONCRAWLER_H
