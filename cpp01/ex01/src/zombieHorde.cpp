/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:56:00 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:38:05 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie **zombieHorde(int N, std::string m_name) {
  Zombie **horde = new Zombie *[N];

  for (int i = 0; i < N; i++) {
    horde[i] = new Zombie(m_name);
  }
  return horde;
}