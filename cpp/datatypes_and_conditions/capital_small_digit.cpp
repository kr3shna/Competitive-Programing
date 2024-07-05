// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M


#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin >>x;
    if(isdigit(x)){
        cout <<"IS DIGIT";
    }
    else{
        cout <<"ALPHA" <<endl;

        if(isupper(x)){
        cout<<"IS CAPITAL";
        }
        else{
            cout <<"IS SMALL";
        }
    }
}