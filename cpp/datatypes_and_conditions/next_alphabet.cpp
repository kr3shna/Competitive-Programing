// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     cin >>c;
//     int x = (int)c;
//     int y = x + 1;
//     if( x == 122){
//         cout <<"a";
//     }
//     else{
//         cout <<(char)y;
//     }

// }


// Another Approach(Better one)

#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c == 'z') {
        cout << 'a' << endl; 
    } else {
        cout << char(c + 1) << endl; 
    }
}