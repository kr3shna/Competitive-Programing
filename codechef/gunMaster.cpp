// https://www.codechef.com/START145D/problems/GMGM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int switches = 0;
        bool hCRGun = true;

        for (int i = 0; i < N; ++i) {
            if (hCRGun && A[i] > D) {
                hCRGun = false;
                switches++;
            } else if (!hCRGun && A[i] <= D) {
                hCRGun = true;
                switches++;
            }
        }

        cout << switches << endl;
    }
   
}