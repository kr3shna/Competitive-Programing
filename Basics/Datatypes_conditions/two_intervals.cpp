// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X


#include <iostream>
using namespace std;
int main(){
    long long m1,m2,n1,n2,range;
    cin >>m1 >>m2 >>n1 >>n2;
    range >=m1 && range<=n1;
    if(range >= m2 && range <= n2){
        cout <<m2  <<n1;
    } 
    else{
        cout << -1;
    }
}