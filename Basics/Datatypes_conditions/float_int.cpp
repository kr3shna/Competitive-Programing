// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U


#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string input;
    cin >> input;
    stringstream ss(input);
    double number;
    ss >> number;
    if (number == static_cast<int>(number)) {
        
        cout << "int " << static_cast<int>(number) << endl;
    } else {
        
        int integerPart = static_cast<int>(number);
        double decimalPart = number - integerPart;
        cout << "float " << integerPart << " " << decimalPart << endl;
    }
}
