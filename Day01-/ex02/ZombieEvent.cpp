/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:14:35 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:14:36 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

ZombieEvent::ZombieEvent()
{
  this->tipe = "staff";
  return;
}

ZombieEvent::~ZombieEvent()
{
  return;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->tipe = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
  Zombie *crea = new Zombie(name, this->tipe);
  return(crea);
}

Zombie* ZombieEvent::randomChump()
{
  time_t ptr;
  ZombieEvent::cmp++;
  std::string name[] = {"ol","coton","zaz","thor","garga","titus","norminette","random","bocal","llefevre","lmartin"};
  std::srand(std::time(&ptr) + cmp);
  Zombie* crea = newZombie(name[std::rand() % 10]);
  crea->Announce();
  return(crea);
}
