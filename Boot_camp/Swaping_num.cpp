// Swaping two numbers using variable

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     c = a;
//     a = b;
//     b = c;
//     cout << "a = " << a <<endl;
//     cout << "b = " << b;
// }

//Swaping two numbers without using variable

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " <<a <<endl;
    cout << "b = " <<b;
}