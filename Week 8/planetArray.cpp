/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: Output all planets and pluto to the console
*/

#include <iostream> //include iostream for input and output
#include <string> //include string library for strings
using namespace std; //use the standard namespace for convenience

int main(){ //start main
    const int numBodies = 9; //set the number of celestial bodies to 9
    string bodies[numBodies] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", //initialize the array with planet names
                                 "Saturn", "Uranus", "Neptune", "Pluto is a dwarf planet"}; 

    cout <<"The planets in the solar system are: " << endl; //outputs to console

    for(int count = 0; count < numBodies; count++){ //initialize count at 0, if count is less than 8: add 1 to count,
        cout << bodies[count] << endl; //output the array value for the current array 
    } //otherwise:
    
return 0; //end

}