#include <iostream>
using namespace std;
int main(){
    float temp_in_c, temp_in_f, temp_in_k;
    cout << "Enter temprature in celsius: ";
    cin >> temp_in_c;
    temp_in_f = ((temp_in_c * 9) / 5) + 32;
    temp_in_k = temp_in_c + 273;
    cout << "Tempratur in Fahrenheit: " << temp_in_f <<endl;
    cout << "Temprature in Kelvin: " << temp_in_k;
}