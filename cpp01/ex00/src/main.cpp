/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/25 11:33:28 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie zombie1("Sven");
	zombie1.announce();
	randomChump("Bernd");
  Zombie *zombie = newZombie("Brian");
  zombie->announce();
  delete zombie;
}