// https://codeforces.com/contest/271/problem/A



#include <iostream>
 
int main() {
    int y;
    std::cin >> y;
 
    for (int year = y + 1; ; ++year) {
        int mask = 0;
        int temp = year;
        bool distinct = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (mask & (1 << digit)) {
                distinct = false;
                break;
            }
            mask |= (1 << digit);
            temp /= 10;
        }
        if (distinct) {
            std::cout << year << std::endl;
            break;
        }
    }
 
    return 0;
}