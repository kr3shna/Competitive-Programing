// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >>n;
    
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    int numbers[n];
    for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
 
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }
    }
    
    cout << "Even: " << evenCount <<endl;
    cout << "Odd: " << oddCount <<endl;
    cout << "Positive: " << positiveCount <<endl;
    cout << "Negative: " << negativeCount <<endl;
}