// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string word;
    cin >> word;
    
    bool allCaps = true;
    bool capsExceptFirst = islower(word[0]);
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            allCaps = false;
            if (i != 0) {
                capsExceptFirst = false;
            }
        } else {
            if (i == 0) {
                capsExceptFirst = false;
            }
        }
    }
    
    if (allCaps || capsExceptFirst) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] = word[i] - 'a' + 'A'; // Convert to uppercase
            } else {
                word[i] = word[i] - 'A' + 'a'; // Convert to lowercase
            }
        }
    }
    
    cout << word << endl;
    
    return 0;
}