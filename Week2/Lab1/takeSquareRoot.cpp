/*
@author: Elijah Silkworth
@date: 5/31/2026
@purpose: this program takes the square root of a real number and prints the result to the console
*/

//include the iostream library for input and output
#include <iostream>
//include the cmath library for mathematical functions
#include <cmath>
//use the standard namespace to avoid having to prefix std:: before every standard library object
using namespace std;

int main(){
    int num = 16;
    double result = sqrt(num);
    cout << "The square root of " << num << " is: " << result << endl;
    return 0;
}