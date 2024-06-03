// https://codeforces.com/problemset/problem/344/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> magnets(n);
    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }

    int groups = 1; // Start with the first magnet as one group
    for (int i = 1; i < n; ++i) {
        if (magnets[i] != magnets[i-1]) {
            ++groups; // New group if current magnet is different from previous
        }
    }

    cout << groups << endl;
    return 0;
}
