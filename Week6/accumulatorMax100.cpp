/*
@author: Elijah Silkworth
@date: 7/1/2026
@purpose: Have a loop run an accumulator, only allow the loop to run a maximum of 100 times. Output the accumulator value to the console after the loop.
*/

#include <iostream> //include iostream for input and output 
using namespace std; //use the standard namespace for convenience

int main() {
    int acc = 0;

   for (int i = 0; i < 100; i++) {
    acc++;
   }
   cout <<"The accumulator value is: " << acc << endl;
return 0;
}
