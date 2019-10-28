/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:14:40 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:14:41 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent {

public:

  ZombieEvent(void);
  ~ZombieEvent(void);
  void setZombieType(std::string type);
  Zombie* newZombie(std::string name);
  Zombie* randomChump();
  int cmp;

private:
  std::string tipe;
};

#endif
