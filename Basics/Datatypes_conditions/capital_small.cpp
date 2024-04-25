// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;
    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;
        
        if (isupper(X)) {
            cout << "IS CAPITAL" << endl;
        }
        
        else {
            cout << "IS SMALL" << endl;
        }
    }
}
