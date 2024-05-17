// https://www.codechef.com/START134D/problems/MONEYDOUBLE

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >>x >>y;

        for (int i = 0; i < y; ++i) {
            if (x * 2 > x + 1000) {
                x *= 2;
            } else {
                x += 1000;
            }
        }

        cout << x << endl;
    }

    return 0;
}
