//
// Created by letsp on 06.11.2022.
//


#include "TerminalUI.h"
#include "Tile.h"
#include "DungeonCrawler.h"
#include "Level.h"
#include <iostream>

void TerminalUI::draw(Level* currentLvl) {

    int usrInput{};
    while (true) {

        for(int i = 0; i < currentLvl->getMaxRow()+1; ++i){
            for (int j = 0; j <currentLvl-> getMaxColumn()+1; ++j) {
                std::cout <<  currentLvl-> getTileVector().at(i).at(j)->getTexture();

            }


            std::cout << std::endl;


        }
        std::cout << std::endl << "Wo wollen Sie hin?(NumPad)" << std::endl << std::flush;
        std::cin >> usrInput;
        if (!std::cin){
            throw std::runtime_error{"Ungueltige Eingabe!"};
        }
        this->getDungeonCrawler()->turn(usrInput);








    }

}


