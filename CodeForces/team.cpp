#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int problems_solved = 0;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Count how many friends are sure about the solution
        int sure_count = petya + vasya + tonya;

        // If at least two friends are sure, count this problem as solved
        if (sure_count >= 2) {
            ++problems_solved;
        }
    }

    cout << problems_solved << endl;

    return 0;
}
