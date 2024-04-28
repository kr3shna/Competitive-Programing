
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V



#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int A, B;
    char S;
    cin >> A >> S >> B;

    
    if (S == '<') {
        if (A < B)
            cout << "Right";
        else
            cout << "Wrong";
    } else if (S == '>') {
        if (A > B)
            cout << "Right";
        else
            cout << "Wrong";
    } else {  // S == '='
        if (A == B)
            cout << "Right";
        else
            cout << "Wrong";
    }

    return 0;
}
