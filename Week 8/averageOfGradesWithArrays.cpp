/*
@author: Elijah Silkworth
@date: 7/17/2026
@purpose: The program will initialize an array with 10 elements, and prompt the user to enter the grade value as an integer for all 10 elements.
Then, when all grades are entered, the program will calculate the average and print it to the console.  
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main(){ //start main
    const int numGrades = 10; //set numgrades equal to 10
    int grade[numGrades]; //initialize an array with the number of elements specified by numGrades

    for(int count = 0; count < numGrades; count++){ //initlalize the count at 0, if the count is less than numGrades, add 1 to count, 
        cout <<"Enter an integer value for grade " << (count + 1) <<": "; //prompt the user to enter an integer value for the current grade
        cin >> grade[count]; //capture it as the value for the grade array
    }

    int avgGrade = ((grade[0] + grade[1] + grade[2] + grade[3] + grade[4] + grade[5] + grade[6] + grade[7] + grade[8] + grade[9]) / 10); 
//calculate the average grade
    cout <<"The average of all 10 grades entered is " << avgGrade; //output the average grade to the console
return 0;
}