/*
@author: Elijah Silkworh
@date: 6/18/2026
@purpose: Capture 3 numbers from the user as inputs and output the average to the console
*/

#include <iostream> //include iostream for input and output
using namespace std; //use standard namespace for convenience

int main(){ 
    int num1, num2, num3; //define num1, 2, 3 as integers
    double average; //define average as an integer

    cout <<"Enter 3 numbers and the program will calculate the average!:"; //prompt the user to enter 3 numbers
    cin >> num1 >> num2 >> num3; //take the numbers as inputs from the user
    
    average = (num1 + num2 + num3) / 3; //calculate the average
    cout <<"Your is...:" << average << endl; //output the average to the console

return 0; //end code
}