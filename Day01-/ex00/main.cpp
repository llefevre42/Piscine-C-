/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:15:12 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 18:15:13 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
  Pony nightpony = Pony("Night Pony");
}

void ponyOnTheStack()
{
  Pony* thunderpony = new Pony("Thunder Pony");
  delete thunderpony;
}


int main (void)
{
  ponyOnTheHeap();
  ponyOnTheStack();
  return(0);
}
