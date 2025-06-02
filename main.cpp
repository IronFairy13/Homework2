#include "ipv4.h"
#include <string>

int main()
{
    std::string s = "123.123.123.123";
    IPv4 ip1 (s);
    ip1.print(std::cout);

    return 0;
}