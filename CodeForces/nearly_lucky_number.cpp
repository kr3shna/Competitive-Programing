// https://codeforces.com/problemset/problem/110/A



#include <iostream>
#include <string>

using namespace std;

bool is_lucky(char c) {
    return c == '4' || c == '7';
}

int count_lucky_digits(long long n) {
    int count = 0;
    while (n > 0) {
        if (is_lucky(n % 10 + '0')) // converting digit to char
            count++;
        n /= 10;
    }
    return count;
}

bool is_nearly_lucky(long long n) {
    int lucky_digit_count = count_lucky_digits(n);
    return is_lucky(lucky_digit_count + '0');
}

int main() {
    long long n;
    cin >> n;
    if (is_nearly_lucky(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
