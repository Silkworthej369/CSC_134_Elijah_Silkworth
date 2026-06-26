/*
@author: Elijah Silkworth
@date: 6/25/2026
@purpose: Run a while statement 100 times, print the amount of iterations to the console. 
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main(){ //start
    int iterations = 0; //set the amount of iterations to zero by default

    while (iterations < 100){ //while the number of iterations is less than 100
        iterations++; //incrementally add 1 iteration per iteration
    }

    cout <<"The number of iterations completed is: " << iterations; //notify the user how many iterations have been completed (should be 100)

return 0; // end 
}
