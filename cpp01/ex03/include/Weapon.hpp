/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:39:27 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:43:21 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
private:
  std::string type;

public:
  Weapon(std::string weaponType);
  ~Weapon();

  // getter
  const std::string &getType() const;

  // setter
  void setType(const std::string &newType);
};
#endif