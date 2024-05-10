// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A


#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int result = a - b;
    
    if (result >= 0) {
        cout << result;
    } else {
        cout << 0;
    }
    
    return 0;
}

