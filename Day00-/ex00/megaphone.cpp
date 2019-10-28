/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:33:27 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/15 15:49:45 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
  int j = 1;
  int k = 0;

  if(ac < 2)
  {
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
      return(0);
  }

  while (av[j])
  {
    k = 0;
    while(av[j][k])
    {
      if(av[j][k] >= 'a' && av[j][k] <= 'z')
      {
        av[j][k] -= 32;
      }
      k++;
    }
    std::cout << av[j]/* << " "*/;
    j++;
  }
  std::cout << std::endl;
  return(0);
}
