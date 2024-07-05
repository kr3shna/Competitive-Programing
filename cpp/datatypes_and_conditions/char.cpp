// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N


#include <iostream>
using namespace std;
int main(){
    char x;
    cin >>x;
    int y = (int)x;
    if(y >=65 && y<=90){
        y += 32;
        cout << (char)y;
    }
    if(x >=97 && x<= 122){
        y-=32;
        cout << (char)y;
    }
}
