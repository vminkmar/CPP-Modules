/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:40:58 by vminkmar          #+#    #+#             */
/*   Updated: 2023/07/25 12:50:56 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replaceString(char **input) {
  std::string name = input[1];
  std::string s1 = input[2];
  std::string s2 = input[3];
  std::fstream file(name.c_str());
  if (!file.is_open()){
    std::cout << "there is no file with that name" << std::endl;
		return ;
	}
  std::ofstream newFile(name.append(".replace").c_str());
  std::string line;
  while (!file.eof()) {
    std::getline(file, line);
    size_t pos = line.find(s1);
    if (pos != std::string::npos) {
      line.erase(pos, s1.length());
      line.insert(pos, s2);
    }
    newFile << line << std::endl;
  }
  file.close();
  newFile.close();
}

int inputCheck(int argc) {
  if (argc != 4) {
    std::cout << "Wrong number of arguments" << std::endl;
    return (1);
  }
	return (0);
}

int main(int argc, char **argv) {
  if(inputCheck(argc) == 1)
		return (1);
  replaceString(argv);
}