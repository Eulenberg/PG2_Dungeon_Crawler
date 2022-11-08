//
// Created by letsp on 06.11.2022.
//
#include "AbstractUI.h"
#include "DungeonCrawler.h"

DungeonCrawler* AbstractUI::getDungeonCrawler() const {
    return dungeonCrawler;
}

void AbstractUI::setDungeonCrawler(DungeonCrawler* dCrawler) {
    AbstractUI::dungeonCrawler = dCrawler;
}

