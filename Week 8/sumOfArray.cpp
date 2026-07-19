/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: Initialize an array with 5 integer values and take the sum of the array, output the result to the console.
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main(){ //start
    const int nums = 5; //set the number of integers to 5
    int values[nums] = {5, 12, 54, 78, 23}; //initialize the array with the specified values
    int sum = 0; //set the sum at zero by default

    for (int count = 0; count < nums; count++){ //set the count to zero, if the count is less than the number of integers (5), add 1 to count,
        sum = sum + values[count]; //set sum equal to the sum of the previous sum + the value in the array (specified by count)
    }
    cout <<"The sum of the array is: " << sum; //print the sum to the console

return 0; //end
}