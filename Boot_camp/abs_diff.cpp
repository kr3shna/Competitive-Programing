#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a > b){
        cout << "Absolute difference between a and b is: " << a - b;
    }
    else{
        cout <<"Absolute difference between a and b is: " << b - a;
    }
}
    