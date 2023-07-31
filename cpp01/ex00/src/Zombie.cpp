/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:47:06 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/27 13:22:57 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(const std::string &zombieName) : m_name(zombieName){
	std::cout << "Creating Zombie: " << m_name << std::endl;
}

Zombie::~Zombie() {std::cout << "Destroying Zombie: " << m_name << std::endl;}

void Zombie::announce() {
  std::cout << m_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
