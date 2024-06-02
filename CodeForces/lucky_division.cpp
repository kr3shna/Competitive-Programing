// https://codeforces.com/problemset/problem/122/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> lucky_numbers;
    string digits = "47";
    for (int i = 1; i <= 3; ++i) { 
        for (char d1 : digits) {
            string num1(1, d1);
            int number1 = stoi(num1);
            if (number1 <= 1000) {
                lucky_numbers.push_back(number1);
            }
            if (i >= 2) {
                for (char d2 : digits) {
                    string num2 = num1 + d2;
                    int number2 = stoi(num2);
                    if (number2 <= 1000) {
                        lucky_numbers.push_back(number2);
                    }
                    if (i == 3) {
                        for (char d3 : digits) {
                            string num3 = num2 + d3;
                            int number3 = stoi(num3);
                            if (number3 <= 1000) {
                                lucky_numbers.push_back(number3);
                            }
                        }
                    }
                }
            }
        }
    }

    
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}


