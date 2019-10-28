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
#include <iostream>
#include <string>

Zombie::Zombie(std::string name, std::string type) : pseudo(name),tipe(type)
{
//  Announce(this->pseudo, this->tipe);
  return;
}

Zombie::~Zombie()
{
//  std::cout << this->pseudo << " was DEAD"<< std::endl;
  return;
}

void Zombie::Announce()
{
    std::cout << "<" << this->pseudo << "(" << this->tipe << ")" << ">" << "Where is Norminetttttt...?" << std::endl;
}
