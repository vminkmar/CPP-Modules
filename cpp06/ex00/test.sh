#!/bin/bash

# Define color codes
GREEN='\033[0;32m'
NC='\033[0m' # No Color

echo -e
echo -e "${GREEN}Testing: inf${NC}"
./ex00 "inf"
echo -e

echo -e "${GREEN}Testing: -inf${NC}"
./ex00 "-inf"
echo -e

echo -e "${GREEN}Testing: inff${NC}"
./ex00 "inff"
echo -e

echo -e "${GREEN}Testing: -inff${NC}"
./ex00 "-inff"
echo -e

echo -e "${GREEN}Testing: nan${NC}"
./ex00 "nan"
echo -e

echo -e "${GREEN}Testing: -nan${NC}"
./ex00 "-nan"
echo -e

echo -e "${GREEN}Testing: nanf${NC}"
./ex00 "nanf"
echo -e

echo -e "${GREEN}Testing: -nanf${NC}"
./ex00 "-nanf"
echo -e

echo -e "${GREEN}Testing: 100${NC}"
./ex00 "100"
echo -e

echo -e "${GREEN}Testing: 100.01${NC}"
./ex00 "100.01"
echo -e

echo -e "${GREEN}Testing: 100.01f${NC}"
./ex00 "100.01f"
echo -e

echo -e "${GREEN}Testing: 102.09${NC}"
./ex00 "102.09"
echo -e

echo -e "${GREEN}Testing: 2000000000000000${NC}"
./ex00 "2000000000000000"
echo -e

echo -e "${GREEN}Testing: -2000000000000000${NC}"
./ex00 "-2000000000000000"
echo -e

echo -e "${GREEN}Testing: a${NC}"
./ex00 "a"
echo -e

echo -e "${GREEN}Testing: abc${NC}"
./ex00 "abc"
echo -e

echo -e "${GREEN}Testing: 0${NC}"
./ex00 "0"
echo -e

echo -e "${GREEN}Testing: \"\" (empty input)${NC}"
./ex00 ""
echo -e