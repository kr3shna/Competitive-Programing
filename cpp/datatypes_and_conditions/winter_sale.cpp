// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,p;
    cin >>x >>p;
    double y = p / (1 - (x / 100));
    cout <<fixed <<setprecision(2) <<y;
}