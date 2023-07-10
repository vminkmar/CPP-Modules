/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/13 13:27:46 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
  Harl harl;

  std::cout << std::endl;
  harl.complain("error");
  std::cout << std::endl;
  harl.complain("info");
  std::cout << std::endl;
  harl.complain("debug");
  std::cout << std::endl;
  harl.complain("warning");
  std::cout << std::endl;
}