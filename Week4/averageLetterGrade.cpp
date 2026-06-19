 /*
 @author: Elijah Silkworth
 @date: 6/18/2026
 @purpose: Take the average of 3 test scores and assign a letter grade to the average. Output the resulting grade and letter to the console. 
*/

#include <iostream>
using namespace std;

int main(){
    const int A_SCORE = 90 , B_SCORE = 80, C_SCORE = 70, D_SCORE = 60, IMPOSSIBLE_SCORE = 100;
    int score1, score2, score3; //define score1, 2, 3 as integers
    double averageScore; //define averageScore as a double

    cout <<"Enter 3 test scores and the program will calculate the average!:"; //prompt the user to enter 3 scores
    cin >> score1 >> score2 >> score3; //take the scores as inputs from the user
    
    averageScore = (score1 + score2 + score3) / 3.0; //calculate the average score
    
    if (averageScore >IMPOSSIBLE_SCORE)//if the average score is impossible,
    {
        cout <<"Woah, there was no extra credit on those tests! How did you get a " << averageScore << "?";// tell the user the score is impossible
    }
    else{ //otherwise,
        if (averageScore >= A_SCORE) //if the average is an A
        {
        cout <<"Congrats! Your score is an A. Your score is: " << averageScore; //tell the user they have an A and their score
        }
        else{ //otherwise,
            if (averageScore >= B_SCORE) //if the average is a B
            {
            cout <<"Nice! Your score is a B. Your score is: " << averageScore; //tell the user they have a B and their score
            }
            else{ //otherwise,
                if (averageScore >= C_SCORE) //if the average is a C
                {
                cout <<"Cool! Your score is a C. Your score is: " << averageScore; //tell the user they have a C and their score
                }
                else{ //otherwise,
                    if (averageScore >= D_SCORE) //if the average is a D
                    {
                    cout <<"Uh oh. Your score is a D. Your score is: " << averageScore; //tell the user they have a D and their score
                    }
                    else{ //otherwise,
                        cout <<"Not good. Your score is a F. Your score is: " << averageScore; //tell the user they have a F and their score
                }
            }
        }
    }
}
return 0; //end program
}