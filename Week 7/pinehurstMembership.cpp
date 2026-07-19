/*
@author: Elijah Silkworth
@date: 7/11/2026
@purpose: Calculate a 6% increase of 250000 per year with it compounding every year. 
*/

#include <iostream> //for input and output
using namespace std; //for convenience

int main(){ //start
    float membershipCost = 250000; //float the default membership cost at $250000

    cout << "The starting membership cost is: \n$" << membershipCost << endl; //outputs the starting membership cost to the console
    cout << endl; //ends line

    for(int i = 1; i <= 5; i++){ //initialize i = 1, when i is less than or equal to 5, add 1 to i, 
        
        membershipCost = (membershipCost * 1.06); //multiply the membership cost by 1.06 for a 6% increase
        //the above function compounds the membership cost
        cout << "The membership cost after " << i << " year(s) is: \n$" << membershipCost << endl; //output the membership cost each iteration (year)
        cout << endl; //end the line
    }
return 0; //end code
}