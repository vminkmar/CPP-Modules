/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:00:52 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:45:35 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameHumanA, Weapon &weaponType)
    : m_name(nameHumanA), m_type(weaponType){};
HumanA::~HumanA(){};

void HumanA::attack() {
  std::cout << m_name << " attacks with their " << m_type.getType() << std::endl;
}