/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:08:28 by llefevre          #+#    #+#             */
/*   Updated: 2019/10/14 21:08:30 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
  std::string*        panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete panthere;
}
