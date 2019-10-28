/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:08:46 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:08:47 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{


//  Announce(this->pseudo, this->tipe);
  return;
}

Zombie::~Zombie()
{
//  std::cout << this->pseudo << " was DEAD"<< std::endl;
  return;
}

void Zombie::Init(int i)
{
  time_t ptr;
  std::string nam[] = {"ol","coton","zaz","thor","garga","titus","norminette","random","bocal","llefevre","lmartin"};
  std::srand(std::time(&ptr) + i);
  this->pseudo = nam[std::rand() % 10];
  this->tipe = "staff";
}

void Zombie::Announce()
{
    std::cout << "<" << this->pseudo << "(" << this->tipe << ")" << ">" << "Where is Norminetttttt...?" << std::endl;
}
