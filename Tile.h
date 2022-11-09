//
// Created by letsp on 04.11.2022.
//


#ifndef PG2_DUNGEON_CRAWLER_TILE_H
#define PG2_DUNGEON_CRAWLER_TILE_H


#include <string>

class Character;


class Tile {


private:
    const std::string texture;

    Character* character;// TODO: Klasse muss noch implementiert werden

    int row;

    int column;
    const bool canMoved;

    bool isOccupied;


public:
    //cTor
    Tile();
    Tile(const std::string& texture, int row, int column, bool canMoved, bool isOccupied, Character* character);
    //dTor
    virtual ~Tile() =default;

    explicit Tile(const std::string& texture , bool=0, Character* =nullptr);

    //setGet
    std::string getTexture() const;

    int getRow() const;

    int getColumn() const;

    void setCharacter(Character* pCharacter);
    Character* getCharacter() const;

    bool getCanMoved() const;

    bool getIsOccupied() const;
    void setIsOccupied(bool occupied);


    bool moveTo(Tile* destTile, Character* who);
    bool hasCharacter();

    virtual Tile* onEnter(Tile* fromTile, Character* who) = 0;

    virtual Tile* onLeave(Tile* destTile, Character* who) = 0;


    bool canBeLeft(Character* who);

    bool canBeEntered(Tile* destTile, Character* who);
}; // class Tile



#endif //PG2_DUNGEON_CRAWLER_TILE_H
