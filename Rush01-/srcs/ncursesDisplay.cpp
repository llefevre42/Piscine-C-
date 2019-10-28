#include <cmath>
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "ncursesDisplay.hpp"
#include "cat.module.hpp"

int ncursesDisplay::iteration = 0;

ncursesDisplay::ncursesDisplay(void)
{
    initscr();
    curs_set(FALSE);
    noecho();
}

ncursesDisplay::ncursesDisplay(ncursesDisplay const &instance)
{
    (void)instance;	
}

ncursesDisplay::~ncursesDisplay(void)
{
    endwin();
}

ncursesDisplay &	ncursesDisplay::operator=(ncursesDisplay const &rhs)
{
    (void)rhs;
    return *this;
}

void printModule(int basey, int basex, int maxx, int maxy,
    std::string infotype, std::string Values)
{
    // if(origin + 25 > COLS){origin.x = 0 et orgin.y + 25};
    // les 0 doivent etre incre avec la position du module

    //top line
    for(int i = 0; i < maxx; i++)
        mvprintw(basey, basex + i, "-");
    //second line
    for(int i = 0; i < maxx; i++)
        mvprintw(basey + 2, basex + i, "-");
    //bottom line
    for(int i = 0; i < maxx; i++)
        mvprintw(basey + maxy, basex + i, "-");
    //left column
    for(int i = 0; i < maxy; i++)
        mvprintw(basey + 1 + i, basex, "|");
    //right column
    for(int i = 0; i < maxy; i++)
        mvprintw(basey + 1 + i, basex + maxx, "|");

    mvprintw(basey + 1, basex + 1, infotype.c_str());

    unsigned long   i = 0;
    int             maxline = maxx - 3;
    while ((i + 1) * maxline < Values.size())
    {
        mvprintw(basey + 3 + i, basex + 1, Values.substr(i* maxline, (i + 1) * maxline).c_str());
        ++i;
    }
    mvprintw(basey + 3 + i, basex + 1, Values.substr(i * maxline).c_str());

}

void    ncursesDisplay::getMonitureModule(bool graphBool, std::string infoType, int position, std::string Values)
{
    int maxy = 5;
    int maxx = 30;

    if (infoType.compare("Cat") != 0)
    {
        printModule(maxy * floor(position / 3),
            maxx * (position % 3),
            maxx, maxy, infoType, Values);
    }
    else
    {
        printModule(maxy * floor(position / 3),
            maxx * (position % 3),
            maxx, maxy, infoType, "");
        /*
        if ((ncursesDisplay::iteration / 10 ) % 3 == 0)
        {
        */
            Cat::catFrame1(maxy * floor(position / 3) + 3,
                maxx * (position % 3));
            
        /*
        }
        if ((ncursesDisplay::iteration / 10 ) % 3 == 1)
        {
            Cat::catFrame2(maxy * floor(position / 3) + 3,
                maxx * (position % 3));
        }
        if ((ncursesDisplay::iteration / 10 ) % 3 == 2)
        {
            Cat::catFrame3(maxy * floor(position / 3) + 3,
                maxx * (position % 3));
        }
        */
    }
    mvprintw(0, 0, std::to_string(ncursesDisplay::iteration).c_str());
    (void)graphBool;
}

void    ncursesDisplay::refreshDisplay(void)
{
    refresh();
}

void    ncursesDisplay::preframeOperations(void)
{
    clear();
}