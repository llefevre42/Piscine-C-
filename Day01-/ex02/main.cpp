/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:08:58 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:08:59 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>

int main (void)
{
  ZombieEvent event;
  ZombieEvent event2;

  event.setZombieType("staff");
  Zombie* crea = event.randomChump();
  delete crea;

  event2.setZombieType("student");
  Zombie* crea2 = event2.randomChump();
  delete crea2;
  return(0);
}
