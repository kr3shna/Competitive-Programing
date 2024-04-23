#include <iostream>
using namespace std;
int main(){
    long long n,summation;
    cin >>n;
    for(int i=1; i<=n; i++){
        summation += i;
        cout << summation;
    }
}