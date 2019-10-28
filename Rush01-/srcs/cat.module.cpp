#include <iostream>
#include <ncurses.h>

#include "cat.module.hpp"

Cat::Cat(void)
{
    this->_graphBool = 0;
    this->_varType = "Cat";
}


Cat::Cat(Cat const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
  (void)instance;
}

Cat::~Cat(void)
{

}

Cat &Cat::operator=(Cat const &rhs)
{
  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	Cat::readAndAddToVector()
{
  this->_Values = "Whateva";
}


void Cat::catFrame1(int x, int y)
{
  mvprintw(y + 0, x, "            ＿＿");
  mvprintw(y + 1, x, "         ／＞     フ");
  mvprintw(y + 2, x, "         |   _   _ l");
  mvprintw(y + 3, x, "        ／` ミ＿xノ");
  mvprintw(y + 4, x, "       /         |");
  mvprintw(y + 5, x, "      /   ヽ    ﾉ");
  mvprintw(y + 6, x, "     │   | | |");
  mvprintw(y + 7, x, " ／￣|   | | |");
  mvprintw(y + 8, x, " | (￣ヽ＿_ヽ_)__)");
  mvprintw(y + 9, x, "  ＼二つ");
}

void Cat::catFrame2(int x, int y)
{
  mvprintw(y + 0, x, "            ＿＿");
  mvprintw(y + 1, x, "　　　　　--　　  Δ");
  mvprintw(y + 2, x, "　　　　　| 　-　 - l");
  mvprintw(y + 3, x, "　 　　　／` ミ＿xノ");
  mvprintw(y + 4, x, "　　 　 /　　　 　 |");
  mvprintw(y + 5, x, "　　　 /　 ヽ　　 ﾉ");
  mvprintw(y + 6, x, "　／￣|　　 |　|　|");
  mvprintw(y + 7, x, "　| (￣ヽ＿_ヽ_)__)");
  mvprintw(y + 8, x, "　＼二つ");
}

void Cat::catFrame3(int x, int y)
{
  mvprintw(y + 0, x, "　　　　　/\\　--- /\\ ");
  mvprintw(y + 1, x, "　　　　　| (|)　(|)");
  mvprintw(y + 2, x, "　 　　　／` __o_ノ");
  mvprintw(y + 3, x, "　　 　 /　　　 　 |");
  mvprintw(y + 4, x, "　　　 /　 ヽ　　 ﾉ");
  mvprintw(y + 5, x, "　 　 │　　|　|　|");
  mvprintw(y + 6, x, "　／￣|　　 |　|　|");
  mvprintw(y + 7, x, "　| (￣ヽ＿_ヽ_)__)");
  mvprintw(y + 8, x, "　＼二つ");
}
