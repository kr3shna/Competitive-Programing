// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T




#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >>a >>b >>c;
    int x = a, y = b, z = c;
    if(a > b){
        swap(a,b);
    }
    if(b > c){
        swap(b,c);
        if(a > c){
            swap(a,c);
        }
    }
    cout <<a <<endl <<b <<endl <<c <<endl <<endl;
    cout <<x <<endl <<y <<endl <<z;

}