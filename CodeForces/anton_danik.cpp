// https://codeforces.com/problemset/problem/734/A




#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    string s;
    cin >> s;

   
    int antonWins = 0;
    int danikWins = 0;

    
    for (char result : s) {
        if (result == 'A') {
            antonWins++;
        } else if (result == 'D') {
            danikWins++;
        }
    }

    
    if (antonWins > danikWins) {
        cout << "Anton" << endl;
    } else if (danikWins > antonWins) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
