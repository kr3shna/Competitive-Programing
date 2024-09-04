// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<int> numbers(n);
    int max_num = INT_MIN; 
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (max_num < numbers[i]) {
            max_num = numbers[i];
        }
    }
    cout << max_num << endl;
    
    return 0;
}
