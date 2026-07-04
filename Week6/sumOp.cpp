/*
@author: Elijah Silkworth
@date: 7/4/2026
@purpose: Make a loop that loops for 50 iterations. Add the index to the adder variable. Set the sum equal to sumOp. Print the value of sumOp each iteration. 
*/

#include <iostream> //include iostream for input and output
using namespace std; //use standard namespace for convenience

int main(){ //start
    int sumOp = 0; //initialize sumOp at 0
    int adder = 10; //initialize adder at 10


    for(int i = 0; i <= 50; i++){ //if the number of loops is less than or eqal to 50, do:
        sumOp = adder + i; // set sumOp equal to adder plus the number of loops completed
        cout <<"The value of sumOp is: " << sumOp << endl; //output the value of sumOp
    }
return 0; //end
}