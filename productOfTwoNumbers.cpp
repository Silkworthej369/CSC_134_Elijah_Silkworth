/*
@author: Elijah Silkworth
@date: 5/31/2026
@purpose: this program calculates the product of two numbers
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to prefix std:: before every standard library object
using namespace std;

int main(){
    int num1 = 6;
    int num2 = 7;
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    return 0;    
}