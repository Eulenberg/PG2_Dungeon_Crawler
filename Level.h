//
// Created by letsp on 06.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_LEVEL_H
#define PG2_DUNGEON_CRAWLER_LEVEL_H

#include <array>
#include <vector>

class Tile;
class Character;
class Portal;


class Level {

private:
    const int maxRow;
    const int maxColumn;
    std::vector<std::vector<Tile*>> tileVector; // TODO Nachfragen wie es mit std::array geloest wird
    std::vector<Character*> characterVector;

public:
    Level();
    Level(int maxRow, int maxColumn);
    virtual ~Level();

    Tile *getTile(int row, int col);
    const Tile *getTile(int row, int col) const;

    void placeCharacter(Character *c, int row, int col);

    void createEmptyLevel(int rows, int columns);

    void createCharacter( int row, int col);

    void createPortals(int p1Row, int p1Col, int p2Row, int p2Col);


    std::vector<std::vector<Tile*>>& getTileVector();

    std::vector<Character*>& getCharacterVector();

    int getMaxRow() const;

    int getMaxColumn() const;
};



#endif //PG2_DUNGEON_CRAWLER_LEVEL_H
