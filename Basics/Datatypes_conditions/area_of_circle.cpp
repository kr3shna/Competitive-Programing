// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double area, pi, r;
    pi = 3.141592653;
    cin >>r;
    area = pi * r *r;
    cout <<fixed <<setprecision(9) <<area;  
}