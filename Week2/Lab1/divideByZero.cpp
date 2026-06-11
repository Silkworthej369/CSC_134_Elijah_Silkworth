/*
@author: Elijah Silkworth
@date: 5/31/2026
@purpose: divide a number by zero and see what happens
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to prefix std:: before every standard library object
using namespace std;

int main(){
    int num1 = 5;
    int quotient = num1 / 0; 
    cout << "The quotient of dividing " << num1 << " by " << 0 << " is: " << quotient << endl;
    return 0;
}