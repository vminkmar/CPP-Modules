/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:30:08 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/13 14:22:02 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug() { std::cout << "Debug message" << std::endl; }

void Harl::info() { std::cout << "Info message" << std::endl; }

void Harl::warning() { std::cout << "Warning message" << std::endl; }

void Harl::error() { std::cout << "Error message" << std::endl; }

void Harl::complain(std::string level) {
  void (Harl::*functionPointer[])(void) = {&Harl::debug, &Harl::info,
                                           &Harl::warning, &Harl::error};
  std::string message[4] = {"debug", "info", "warning", "error"};
  int i = 0;
  while(i < 4){
    if (level.compare(message[i]) == 0)
      break;
	i ++;
  }
  switch (i)
  {
  case 0:
	(this->*functionPointer[0])();
	(this->*functionPointer[1])();
	(this->*functionPointer[2])();
	(this->*functionPointer[3])();
	break;
  case 1:
	(this->*functionPointer[1])();
	(this->*functionPointer[2])();
	(this->*functionPointer[3])();
	break;
  case 2:
	(this->*functionPointer[2])();
	(this->*functionPointer[3])();
	break;
  case 3:
	(this->*functionPointer[3])();
	break;
  
  default:
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	break;
  }
}