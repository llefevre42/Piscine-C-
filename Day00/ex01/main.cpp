/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:35:57 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/15 15:58:56 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <iomanip>
#include "rep.class.hpp"

void cmd(Rep *instance, int a)
{
  int j = 0;
  std::string strinfo[] = {"First Name :","Last Name :","Nickname :","Login :","Postal Address :","Mail :","Phone Number :", "Birthday Date :", "Favorite Meal :", "Underwear Color :", "Darkest Secret :"};
  char buff[1024];
  char buff2[1024];
  int i = 0;
  int k = 0;

  std::cout << "request :";
  std::cin >> buff;
  if(0 ==strncmp(buff,"EXIT", 4))
    return;
  else if(0 == strncmp(buff,"ADD", 3))
  {
    if(a > 7)
    {
      std::cout << "ta trop d'amis degage!!";
      cmd(instance,a);
    }
    while(i < 11)
    {
      std::cout << strinfo[i];
      std::cin >> instance[a].info[i];
      i++;
    }
    std::cout << "contact create" << std::endl;
    a++;
    cmd(instance, a);
  }
  else if(0 == strncmp(buff,"SEARCH", 5))
  {
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;

    while(i < a)
    {
      std::cout << "|         " << i+1 << '|';
      j = 0;
      while(j < 3)
      {
        std::string str = instance[i].info[j];
        if(str.size() >= 11)
        {
          str.resize(9);
          str.resize(10, '.');
        }
        std::cout << std::setw(10) << str << "|";
        j++;
      }
      std::cout << std::endl;
      i++;
    }
    std::cout << "index :";
    std::cin >> buff2;
    if(atoi(buff2)+ 1 <= a + 1 && atoi(buff2) != 0 && buff2[1] == '\0')
    {
      while(k < 11)
      {
        std::cout << strinfo[k] << instance[atoi(buff2) - 1].info[k] << std::endl;
        k++;
      }
    }
    else
    {
      std::cout << "connait pas deso" << std::endl;
    }
    cmd(instance, a);
  }
  else
    cmd(instance, a);
}

int main(void)
{
  int a = 0;
  Rep instance[8];
  cmd(instance, a);
  return(0);
}
