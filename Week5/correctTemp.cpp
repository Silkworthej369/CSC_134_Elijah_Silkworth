/*
@author: Elijah Silkworth
@date: 6/25/2026
@purpose: Prompt the user to enter a temperature until a temperature of 212.34 is entered.
*/

#include <iostream> //include iostream for inputs and outputs
using namespace std; //use the standard namespace for convenience

int main(){ //start
    double temperature; //define temperature as a double

    while (temperature != 212.34){ //while temperature is not equal to 212.34, do:

        cout <<"Please enter a temperature:\n"; //prompt the user to enter a temperature
        cin >> temperature; //define the input from the user as temperature

    }
    cout <<"The temperature has been successfully set, thank you."; //prompt the user that the correct temperature was entered

return 0; //end 
}

/*
I see how this could be used for setting a password, and only allowing 
code to be executed once the correct password is entered. 
*/