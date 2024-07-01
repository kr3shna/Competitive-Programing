#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers;
        int place = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                roundNumbers.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << roundNumbers.size() << "\n";
        for (int roundNumber : roundNumbers) {
            cout << roundNumber << " ";
        }
        cout << "\n";
    }
}