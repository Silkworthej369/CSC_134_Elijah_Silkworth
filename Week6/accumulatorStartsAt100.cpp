/*
@author: Elijah Silkworth
@date: 7/3/2026
@purpose: Write a program that starts with the accumulator at 100 and loops backwards to the value of 1. Print the value of the accumulator each loop iteration to the console. 
*/

#include <iostream> //include iostream for inputs and outputs
using namespace std; //use the standard namespace for convenience

int main(){

    for (int i = 100; i >= 1; i-- ){
        cout << "Iteration #" << i << endl;
    }
return 0;
}
