// https://codeforces.com/contest/236/problem/A




#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string username;
    cin >> username;
    
    unordered_set<char> distinctChars;
    
    for(char c : username) {
        distinctChars.insert(c);
    }
    
    if(distinctChars.size() % 2 == 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    
    return 0;
}