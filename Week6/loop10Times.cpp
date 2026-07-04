/*
@author: ELijah Silkworth
@date: 7/1/2026
@purpose: Count the number of times a loop executes and displays the result to the user.
*/

#include <iostream> //include iostream for input and output 
using namespace std; //include standard namespace for convenience

int main(){ //start
    int count = 0; //initialize count

    for(int i = 0; i < 10; i++) { //loop that executes 10 times
        count ++; //add 1 incrementally to count
        cout << "The loop executed " << count << " times." << endl; //display result to user
    }
    

return 0; //end
}
