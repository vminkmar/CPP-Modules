#include "BitcoinExchange.hpp"

bool isValidDateFormat(const std::string &date) {
  if (date.size() != 10) {
    return false;
  }
  if (date[4] != '-' || date[7] != '-') {
    return false;
  }
  for (int i = 0; i < 10; ++i) {
    if (i == 4 || i == 7) {
      continue;
    }
    if (!isdigit(date[i])) {
      return false;
    }
  }
  return true;
}

std::string strtrimDate(std::string &line) {
  int startPos = 0;
  int endPos;
  size_t i = line.size() - 1;
  std::string newLine;
  while (line[i] == ' ')
    i--;
  endPos = i + 1;
  newLine = line.substr(startPos, endPos);
  return newLine;
}

std::string strtrimValue(std::string &line) {
  int startPos = 0;
  int endPos = line.size();
  size_t i = 0;
  std::string newLine;
  while (line[i] == ' ')
    i++;
  startPos = i;
  newLine = line.substr(startPos, endPos);
  return newLine;
}

float getValueData(std::string &line) {
  std::string temp;
  size_t endPos = line.size() - 1;
  size_t startPos = line.find(',');
  temp = line.substr(startPos + 1, endPos);
  char *ptr;
  float value = strtof(temp.c_str(), &ptr);
  if (*ptr != '\0') {
    std::cout << "Wrong" << std::endl;
  }
  if (value < 0) {
    std::cout << "Value has to be positiv" << std::endl;
  }
  return value;
}

std::string getDateData(std::string &line) {
  std::string date;
  std::string temp;
  size_t startPos = line.find(',');
  if (startPos == std::string::npos) {
    std::cout << "Invalid date" << std::endl;
    return NULL;
  }
  date = line.substr(0, startPos);
  if (!isValidDateFormat(date)) {
    std::cout << "invalid date" << std::endl;
    return NULL;
  }
  return date;
}

float getValueInput(std::string &line) {
  std::string temp;
  size_t endPos = line.size() - 1;
  size_t startPos = line.find('|');
  temp = line.substr(startPos + 1, endPos);
  std::string newString;
  newString = strtrimValue(temp);
  char *ptr;
  float value = strtof(newString.c_str(), &ptr);
  if (*ptr != '\0') {
    std::cout << "Input is not a float" << std::endl;
    return (-1);
  }
  if (value > 21000000) {
    std::cout << "There are not enough Bitcoin" << std::endl;
    return (-1);
  }
  if (value > 1000) {
    std::cout << "Value can't be bigger than 1000" << std::endl;
    return (-1);
  }
  if (value < 0) {
    std::cout << "Value has to be positiv" << std::endl;
  }
  return (value);
}

std::string getDateInput(std::string &line) {
  std::string date;
  std::string temp;
  size_t startPos = line.find('|');
  if (startPos == std::string::npos) {
    std::cout << "Invalid Format of the date" << std::endl;
    return "";
  }
  date = line.substr(0, startPos);
  date = strtrimDate(date);
  if (!isValidDateFormat(date)) {
    std::cout << "invalid date" << std::endl;
    return "";
  }
  if (date < "2009-01-02") {
    std::cout << "date is to far in the past" << std::endl;
    return "";
  }
  return date;
}

int main(int argc, char *argv[]) {
  checkInput(argc);
  std::string nameInputFile = argv[1], nameDataFile = "data.csv";
  std::fstream dataFile(nameDataFile.c_str());
  if (!dataFile.is_open()) {
    std::cout << "There is no data file" << std::endl;
    return (1);
  }
  std::string dateData;
  float valueData;
  int counter = 0;
  BitcoinExchange Map;
  while (!dataFile.eof()) {
    std::string line;
    std::getline(dataFile, line);
    if (counter == 0) {
      counter++;
      continue;
    }
    if (line.empty())
      continue;
    dateData = getDateData(line);
    valueData = getValueData(line);
    Map.createMap(dateData, valueData);
  }
  // Map.iterate();
  dataFile.close();
  std::fstream inputFile(nameInputFile.c_str());
  if (!inputFile.is_open()) {
    std::cout << "There is no data file" << std::endl;
    return (1);
  }
  std::string dateInput;
  float valueInput;
  counter = 0;
  while (!inputFile.eof()) {
    std::string line;
    std::getline(inputFile, line);
    if (counter == 0) {
      counter++;
      continue;
    }
    if (line.empty())
      continue;
    dateInput = getDateInput(line);
    if (dateInput.empty())
      continue;
    valueInput = getValueInput(line);
    if (valueInput < 0)
      continue;
    Map.compareAndPrint(dateInput, valueInput);
  }
  inputFile.close();
}