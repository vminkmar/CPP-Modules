#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::createMap(std::string date, float value) {
  Database.insert(std::make_pair(date, value));
}

void BitcoinExchange::compareAndPrint(std::string date, float valueInput,
                                      float valueData) {
																				valueData = 0;
  typedef std::map<std::string, float>::iterator MapIterator;
  for (MapIterator it = Database.begin(); it != Database.end(); it++) {
    if (date == it->first) {
      std::cout << date << " => " << valueInput << " = "
                << valueInput * it->second << std::endl;
      return;
    }
  }
  std::map<std::string, float>::iterator Date;
	Date = Database.upper_bound(date);
	if(Date == Database.begin())
		Date = Database.begin();
	else
		Date--;
  std::cout << date << " => " << valueInput << " = " << valueInput *
  Date->second << std::endl;
}

void BitcoinExchange::iterate(){
	std::map<std::string, float>::iterator iterate;

	for(iterate = Database.begin(); iterate != Database.end(); iterate++)
		std::cout << iterate->first << "	" << iterate->second << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	Database = copy.Database;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if(this == &obj)
		return *this;
	Database = obj.Database;
	return *this;
}

void checkInput(int argc) {
  if (argc != 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    exit(1);
  }
}
