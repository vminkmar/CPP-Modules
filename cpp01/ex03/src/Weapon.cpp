/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:32 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/12 13:58:19 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType){};
Weapon::~Weapon(){};

const std::string &Weapon::getType() const { return this->type; }

void Weapon::setType(const std::string &newType) { this->type = newType; }