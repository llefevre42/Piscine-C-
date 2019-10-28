/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:15:07 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 18:15:08 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <string>

class Pony {


public:
  Pony(std::string name);
  ~Pony();

private:
  std::string pseudo;
  
};


#endif
