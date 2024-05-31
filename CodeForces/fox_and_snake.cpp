// https://codeforces.com/problemset/problem/510/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m, '.'));

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                grid[i][j] = '#';
            }
        } else {
            if ((i / 2) % 2 == 0) {
                grid[i][m - 1] = '#';
            } else {
                /grid[i][0] = '#';
            }
        }
    }

   for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
