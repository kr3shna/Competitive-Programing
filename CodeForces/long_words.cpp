// https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
 
    for (int i = 0; i < n; ++i) {
        string word;
        getline(cin, word);
        
        if (word.length() <= 10) {
            cout << word << endl;
        } else {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
    }
 
    return 0;
}
