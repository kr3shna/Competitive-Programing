
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >>b;
    (a%b==0 || b%a==0) ? cout << "Multiples" : cout << "No Multiples";
}
