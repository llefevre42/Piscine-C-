/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:08:51 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:08:53 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {

public:

  Zombie(void);
  ~Zombie(void);
  void Init(int i);
  void Announce();


private:
  std::string pseudo;
  std::string tipe;

};

#endif
