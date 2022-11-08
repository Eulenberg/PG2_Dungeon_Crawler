
#include "TerminalUI.h"
#include "DungeonCrawler.h"
#include <iostream>



int main() try{


    Level* test3{new Level()};
    delete test3;

    Level* test1{new Level()};
    TerminalUI* test2 = new TerminalUI();
    DungeonCrawler* dg = new DungeonCrawler(test2, test1);
    test2->draw(test1);


// TODO Wegen dem * bei Pointer fragen



}


catch(std::exception& re)
{
    std::cerr << "Error" << re.what() << std::endl;

    return -1;

}

