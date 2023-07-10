/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:39:27 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:36:20 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <new>
#include <string>

class Zombie {
private:
  std::string m_name;

public:
  Zombie(const std::string &zombieName);
  ~Zombie();
  void announce();
};
Zombie **zombieHorde(int N, std::string name);
#endif