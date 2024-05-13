
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double X, P;
    std::cin >> X >> P;
    
    double priceBeforeDiscount = P / (1 - (X / 100));
    
    std::cout << std::fixed << std::setprecision(2) << priceBeforeDiscount << std::endl;

    return 0;
}
