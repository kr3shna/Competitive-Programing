// https://codeforces.com/contest/59/problem/A



#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string word;
    cin >> word;
 
    int upperCount = 0, lowerCount = 0;
 
    for (char c : word) {
        if (isupper(c))
            upperCount++;
        else
            lowerCount++;
    }
 
    if (upperCount > lowerCount) {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
 
    cout << word << endl;
 
    return 0;
}