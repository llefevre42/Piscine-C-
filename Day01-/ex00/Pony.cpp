/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:15:02 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 18:15:03 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string name) : pseudo(name)
{
  std::cout << this->pseudo << " was BORN"<< std::endl;
  return;
}


Pony::~Pony()
{
  std::cout << this->pseudo << " was DEAD"<< std::endl;
  return;
}
