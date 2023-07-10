/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/12 10:17:15 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  int numberZombies = 5;
  Zombie **zombies = zombieHorde(numberZombies, "Brian");
  for (int i = 0; i < numberZombies; i++) {
    zombies[i]->announce();
    delete zombies[i];
  }
  delete[] zombies;
  return (0);
}