/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/25 11:43:33 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address of str: " << &str << std::endl;
  std::cout << "Address of stringPTR: " << stringPTR << std::endl;
  std::cout << "Address of stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "Value of str: " << str << std::endl;
  std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value of stringREF: " << stringREF << std::endl;
}