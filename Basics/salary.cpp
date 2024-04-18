#include <iostream>
using namespace std;
int main(){
    float Annual_salary,tax_rate, Annual_salary_post_tax, Monthly_salary;
    cout << "Enter a Annual Salary: ";
    cin >> Annual_salary;
    cout << "Enter Tax Rate: ";
    cin >> tax_rate;
    Annual_salary_post_tax = Annual_salary * (1 - (tax_rate/100));
    Monthly_salary = Annual_salary_post_tax / 12;
    cout << Monthly_salary;
}