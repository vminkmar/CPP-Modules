/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/07 11:46:51 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
  {
    Weapon club = Weapon("Sword");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("Long Sword");
    bob.attack();
  }
  {
    Weapon club = Weapon("Pistol");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("Machine Gun");
    jim.attack();
  }
}