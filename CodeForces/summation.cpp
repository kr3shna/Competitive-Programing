// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<long long> A(N); 
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
 
    long long absoluteSum = 0;
    for (int i = 0; i < N; ++i) {
        absoluteSum += abs(A[i]);
    }
 
    cout << absoluteSum << endl;
 
    return 0;
}