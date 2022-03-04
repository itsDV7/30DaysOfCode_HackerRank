#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

int main() {
    int i{4};
    double d{4.0};
    std::string s{"HackerRank "};
    
    int varInt{};
    std::cin >> varInt;
    
    double varDouble{};
    std::cin >> varDouble;
    
    std::string varString;
    std::cin.ignore();
    getline(std::cin, varString);
    
    std::cout << i + varInt << std::endl;
    std::cout << std::setprecision(1) << std::fixed << d + varDouble << std::endl;
    std::cout << s + varString <<std::endl;
    
    return 0;
}
