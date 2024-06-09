// https://codeforces.com/problemset/problem/318/A





#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long num_odds = (n + 1) / 2; 
 
    if (k <= num_odds) {
       
        cout << 2 * k - 1 << endl;
    } else {
       
        k -= num_odds;
        cout << 2 * k << endl;
    }
 
    return 0;
}