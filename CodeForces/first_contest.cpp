#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool all_same = all_of(s.begin(), s.end(), [&](char c) { return c == s[0]; });

        if (all_same) {
            cout << "NO" << endl;
        } else {
            cout << "YES\n";
            
            next_permutation(s.begin(), s.end());
            cout << s << endl;
        }
    }

    return 0;
}
