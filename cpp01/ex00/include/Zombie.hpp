/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:39:27 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/27 13:22:08 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <new>

class Zombie {
private:
  std::string m_name;

public:
  Zombie(const std::string &zombieName);
  ~Zombie();
  void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif