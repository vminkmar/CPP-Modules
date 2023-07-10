/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:30:08 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/13 13:28:43 by vminkmar         ###   ########.fr       */
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
  for (int i = 0; i < 4; i++) {
    if (level.compare(message[i]) == 0)
      (this->*functionPointer[i])();
  }
}