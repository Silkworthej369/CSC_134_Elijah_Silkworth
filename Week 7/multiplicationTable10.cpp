/*
@author: Elijah Silkworth
@date: 7/10/2026
@purpose: Generate a 10x10 multiplication table 
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main(){ //start
    int maxRows = 10; //set maxRows = 10

    for(int i = 1; i <= maxRows; i++){ //initialize i = 1, as long as row is less than or equal to maxRows, add 1 to i,
        for (int row = 1; row <=maxRows; row++){ //initialize row at 1, as long as row is less than or equal to maxRows, add 1 to row, 
            int val = (row * i); //set val equal to row times i
            cout << val << "\t"; // output val to the console and tab right
        }
        cout << " " << endl; //end line
    }
return 0; //end
}