cmake_minimum_required(VERSION 3.23)
project(PG2_Dungeon_Crawler)

set(CMAKE_CXX_STANDARD 14)

add_executable(PG2_Dungeon_Crawler main.cpp Tile.cpp Tile.h Floor.cpp Floor.h Wall.cpp Wall.h Portal.cpp Portal.h DungeonCrawler.cpp DungeonCrawler.h Character.cpp Character.h Level.cpp Level.h AbstractUI.cpp AbstractUI.h TerminalUI.cpp TerminalUI.h)
