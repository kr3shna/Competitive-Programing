// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R



#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int years = N / 365;
    N %= 365;
    int months = N / 30;
    int days = N % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}