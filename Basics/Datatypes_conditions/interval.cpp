// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S


#include <iostream>
using namespace std;
int main(){
    double x;
    cin >>x;
    if(x >= 0 && x <= 100){
        cout <<"Interval ";
        if(x >= 0 && x <= 25){
            cout <<"[0,25]";
        }
        if(x > 25 && x <= 50){
            cout <<"(25,50]";
        }
        if(x > 50 && x <= 75){
            cout <<"(50,75]";
        }
        if(x > 75 && x <= 100){
            cout <<"(75,100]";
        }
    }
    else{
        cout <<"Out of Intervals";
    }
}