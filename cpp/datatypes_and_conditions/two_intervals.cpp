// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    long long intersection_start = (l1 > l2) ? l1 : l2;
    long long intersection_end = (r1 < r2) ? r1 : r2;
    
    if (intersection_start <= intersection_end) {
        cout <<intersection_start <<" " <<intersection_end;
    } else {
        cout << -1 << std::endl;
    }
}
