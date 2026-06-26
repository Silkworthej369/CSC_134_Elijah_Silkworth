/*
@author: Elijah Silkworth
@date: 6/25/2026
@purpose: Prompt a user to enter 10 grades. When the user enters 10 grades, stop prompting them and calculate the average of all the grades
*/

#include <iostream> //include iostream for input and output
using namespace std; //use standard namespace for convenience

int main(){
    float grade; //define the grade as a floating point
    float sumOfGrades = 0; //set the sum of all grades equal to zero by default
    float averageGrade; //define the average grade as a floating point
    int gradesEntered = 0; //set the amount of grades entered to zero by default

    cout <<"Enter 10 grades and see the average!\n";

    while (gradesEntered < 10){

        cout <<"Enter a grade:\n"; //prompt user to enter a grade
        cin >> grade; //define the entered value as the grade

        sumOfGrades = sumOfGrades + grade; //add the grade entered by the user to the sum of all grades
        gradesEntered++; //increase gradesentered incrementally by 1 each loop
    }

    averageGrade = (sumOfGrades) / 10; //calculate the average grade and define it as such
    cout <<"The average of the 10 grades you entered is:\n" << averageGrade; //print the average grade to the console
}
