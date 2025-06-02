#include <cstdint>
#include <array>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "ipv4.h"


    IPv4::IPv4(const std::string& s) : ipv4(parser_ipv4(s)) {}

    std::array<uint8_t, 4> IPv4::parser_ipv4(const std::string &s)
    {
        std::array<uint8_t, 4> ip{};
        std::istringstream ss(s);
        std::string num;
        for(int i = 0; i < 4 && std::getline(ss, num, '.'); ++i)
        {
            ip[i] = std::stoi(num);
        }
        return ip;
    }

    void IPv4::print(std::ostream& out) const
    {
        out << static_cast<int>(ipv4[0]) << '.' 
            << static_cast<int>(ipv4[1]) << '.'
            << static_cast<int>(ipv4[2]) << '.'
            << static_cast<int>(ipv4[3]) << std::endl;
    }
