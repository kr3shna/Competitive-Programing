// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >>x;
   int y = x / 1000;
   if(y % 2 == 0){
    cout <<"EVEN";
   }
   else{
    cout <<"ODD";
   }
}