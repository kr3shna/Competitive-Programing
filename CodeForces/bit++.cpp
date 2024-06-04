// https://codeforces.com/problemset/problem/282/A



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0; 

    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;

        
        if (statement.find("++") != string::npos) {
            ++x; 
        } else {
            --x; 
        }
    }

    cout << x << endl;
    return 0;
}
