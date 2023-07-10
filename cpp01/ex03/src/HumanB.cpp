/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:09:44 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:44:45 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string nameHumanB) : m_name(nameHumanB){};
HumanB::~HumanB(){};

void HumanB::attack() {
  std::cout << m_name << " attacks with their " << m_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) { this->m_type = &newWeapon; }