// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long product = (A % 100) * (B % 100) * (C % 100) * (D % 100);
    int last_two_digits = product % 100;
    cout << setw(2) << setfill('0') << last_two_digits << endl;
}


