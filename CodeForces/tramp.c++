#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> stops(n);
    for (int i = 0; i < n; ++i) {
        cin >> stops[i].first >> stops[i].second;
    }
    int current_passengers = 0;
    int max_capacity = 0;
    for (int i = 0; i < n; ++i) {
        current_passengers -= stops[i].first; 
        current_passengers += stops[i].second; 
        max_capacity = max(max_capacity, current_passengers);
    }
    cout << max_capacity << endl;
}
