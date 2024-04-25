
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >>a >>b >>c;
    if(a > b && a < c){
        cout <<a <<endl;
        if(b < c){
            cout <<b;
        }
        else{
            cout <<c;
        }
    }
    if(b > a && b < c){
        cout <<b <<endl;
        if(a < c){
            cout <<a;
        }
        else{
            cout <<c;
        }
    }
    if(c > b && c < a){
        cout <<c <<endl;
        if(b < a){
            cout <<b;
        }
        else{
            cout <<a;
        }
    }
}