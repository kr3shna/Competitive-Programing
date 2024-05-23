// https://codeforces.com/problemset/problem/1/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long neededFlagstones = ceil((double)n / a) * ceil((double)m / a);
    cout << neededFlagstones << endl;

    return 0;
}
