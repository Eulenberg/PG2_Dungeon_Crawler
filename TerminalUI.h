//
// Created by letsp on 06.11.2022.
//

#ifndef PG2_DUNGEON_CRAWLER_TERMINALUI_H
#define PG2_DUNGEON_CRAWLER_TERMINALUI_H
#include "AbstractUI.h"


class TerminalUI: public AbstractUI {

public:


    void draw(Level *) override;


};


#endif //PG2_DUNGEON_CRAWLER_TERMINALUI_H
