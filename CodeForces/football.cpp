// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>

using namespace std;

bool isDangerous(string s) {
    int count = 1;
    char prev = s[0];
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            count++;
        } else {
            count = 1;
            prev = s[i];
        }
        
        if (count >= 7) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string s;
    cin >> s;
    
    if (isDangerous(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
