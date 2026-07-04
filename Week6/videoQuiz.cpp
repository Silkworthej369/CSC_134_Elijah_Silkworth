/*
@author: Elijah Silkworth
@date: 7/3/2026
@purpose: Take the average of all grades entered by the user. Output the number of scores entered, how many scores are passing (>70), the average score, and whether the average is passing or not. 
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main() //start code
{
    int score; //initialize score
    int count = 0; //initialize count at zero
    int passingScores = 0; //initialize passing scores at zero
    float total = 0.0f; //float the total at 0.0
    bool continueEntering = true; //set continueEntering as true

    while (continueEntering) //while continueEntering is set to true
    {
        cout << "Enter a test score (0 - 100): "; //prompt the user to enter a score between zero and 100
        cin >> score; //take the input from the user as the score

        total += score; //add score to the total and make the sum the new total
        count++; //add 1 incrementally to the count

        if (score >= 70) //if the score is greater than or equal to 70
        { //do:
            passingScores++; //add 1 incrememntally to passing scores
        }

        cout << "Enter another score? (1 for true, 0 for false): "; //promp the user to add another score
        cin >> continueEntering; //if the user enters 1, set continueEntering to true, if the user enters 0, set continueEntering to False
    }

    
    //If 100 is entered, the bool fails and defaults to the last value of continueEntering, which is true, so it loops infinitely
    
    
    //after the user chooses not to continue entering:
    float average = 0.0f; // float the average as 0.0

    if (count > 0) //if the count is greater than zero
    { //do 
        average = total / count; //calculate the average by taking the average of all scores and dividing it by the count (how ever many entered)
    }
    //output block:
    cout << "\nResults" << endl; //1st line: results
    cout << "-------" << endl; // divider line
    cout << "Scores Entered: " << count << endl; // outputs the amount of scores entered
    cout << "Passing Scores: " << passingScores << endl; //outputs how many scores were passing (>70)
    cout << "Average Score: " << average << endl; //outputs the average score 

    bool classPassed = average >= 70.0f; //if the average is above 70, set classPassed to 1 (true), if not, set it to 0 (false)

    cout << "Class Average Passing: " << classPassed << endl; //output if the user passed the class or not

    return 0; //end
}
