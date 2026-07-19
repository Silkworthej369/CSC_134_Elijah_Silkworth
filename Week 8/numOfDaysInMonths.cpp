/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: Print the number of days of the months in order to the console using a 1 dimensional array.
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for input and output

int main(){ //start
    const int months = 12; //initalize the number of months at 12
    int days[months] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //initialize the month array

    for(int count = 1; count < months; count++){ //initalize count at 1, if count is less than months: add 1 to count, 
        cout << "Month " << (count + 1) << " has " << days[count] << " days" << endl; //output the months and their values in the array
    }//otherwise:
return 0; //end
}
/*
Not sure if you made a mistake when giving the example output for this assignment, or purposely left out
month 1, but if it was a mistake, initalize count at 0 instead and the code will display the values for all 12 months.
*/