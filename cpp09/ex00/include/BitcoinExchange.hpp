#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <string>

class BitcoinExchange {
private:
  std::map<std::string, float> Database;

public:
  BitcoinExchange();
  ~BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &copy);
  BitcoinExchange &operator=(const BitcoinExchange &obj);
  void createMap(std::string date, float value);
	void compareAndPrint(std::string date, float valueInput);
	void iterate();
};
void checkInput(int argc);

#endif