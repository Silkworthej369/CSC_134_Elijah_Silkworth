/*
@author: Elijah Silkworth
@date: 7/11/2026
@purpose: Prompt the user to enter a budget. Ask the user if they would like to enter expenses, if yes, total all spendings until 
the user says no. Then print if the user is over or under budget, and by how much.
*/

#include <iostream> //for input and output
using namespace std; //for convenience

int main(){ //start
    bool continueEntering = true; //set continueEntering to true by default
    float budget; //float budget
    float expense; //float expense
    float totalExpense = 0; //float totalExpense default at 0

    cout << "Enter your monthly budget:\n"; //prompt the user to enter their monthly budget
    cin >> budget; //take the entered value as budget

    while (continueEntering){ //while continueEntering = true
        
        cout << "Enter an expense: "; //prompt the user to enter an expense
        cin >> expense; //take the entered value as an expense

        totalExpense += expense; //set totalExpense equal to the sum of the prevoius totalExpense value and expense

        cout <<"Would you like to enter another expense? (1 for yes, 0 for no):\n"; //ask the user if they want to enter another expense
        cin >> continueEntering; //take the entered value as the value for continueEntering
    } //while continueEntering is false:

    if (totalExpense <= budget){ //if the user is under budget
        float underbudget = (budget - totalExpense); //set underbudget equal to budget minus the total expenses
        cout <<"Congratulations! You are under budget by: $" << underbudget <<endl; //print the amount under budget to the console
    } else{ //otherwise:
        float overbudget = (totalExpense - budget); //set overbudget equal to the total expenses minus the budget
        cout <<"Uh oh! You're over budget by: $" << overbudget << endl; //print the amount over budget to the console
    }
return 0; //end
}