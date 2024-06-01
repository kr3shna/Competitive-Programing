// https://codeforces.com/problemset/problem/1030/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of people
    bool isHard = false;  // Initialize a flag to check if the problem is hard

    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion;  // Read the opinion of each person
        if (opinion == 1) {
            isHard = true;  // If any opinion is 1, set the flag to true
            break;  // No need to check further if we already know the problem is hard
        }
    }

    if (isHard) {
        cout << "HARD" << endl;  // If any person thinks the problem is hard, print "HARD"
    } else {
        cout << "EASY" << endl;  // If all people think the problem is easy, print "EASY"
    }

    return 0;
}
