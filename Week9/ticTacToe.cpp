/*
@author: Elijah Silkworth 
@date: 7/22/2026
@purpose: The program will render a game of Tic Tac Toe with a standard 3x3 grid, 2 players, and checks to ensure no illegal moves are made. 
Let the games begin.
*/

#include <iostream> //include iostream for input and output 
#include <string> //include string library for strings
using namespace std; //use the standard namespace for convenience

int main(){ //start main
//                                                          INITIALIZATION:
//------------------------------------------------------------------------------------------------------------------------------------------
    char board[3][3] =  {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; //initializes an array for a board with 3 row and 3 colums
    const char player1 = 'X'; //sets player 1 to be the X
    const char player2 = 'O'; //sets player 2 to be the O
    char currentPlayer = player1; //defines the current player (player 1 by default)
    char winner = ' '; //sets the default winner to nobody

    int row = -1; //initializes the default value that the player chooses for the row. (default -1, means player hasn't selected yet)
    int colum = -1; //initializes the default value that the player chooses for the colum. (default -1, means player hasn't selected yet)

//                                                              GAME:
//------------------------------------------------------------------------------------------------------------------------------------------


    for (int i = 0; i < 9; i++){ //set i = 0, if i is less than 9: add 1 to i, 
       //output the whole board to the console
    cout << "   |   |   " << endl;
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "   |   |   " << endl; 

    if (winner !=' '){ //if the winner is determined (a value is present), then:
        break; //end the loop (game)
    }

     cout << "Current player is: " << currentPlayer << endl; //print the current player
    while(true){
        //prompt the user to enter the coordinates of their next move
        cout << "Enter coordinates from 1-3 for the row and colum: " << "(Separated by a space)" << endl; 

        cin >> row >> colum; // take the inputs for row and colum

        //Makes it so that the user doesn't accidentally enter 3 instead of 2 for the third row, more intuitive.
        row = row - 1; 
        colum = colum - 1;
    
        if (board[row][colum] !=' ') { //if there is not a blank space, do:
            cout << "The tile is already full, try agian." << endl; //tell the player that the space is taken
        } else {
            break; //otherwise, break the loop
        }
        
        //reset the values back to default
        row = -1;
        colum = -1;
    }
     

    board[row][colum] = currentPlayer; //sets the last move to the current player, if the last move placed an x, current player = x, etc.

    if (currentPlayer == player1){ //if the current player is player1:
        currentPlayer = player2; //change to player2
    } else { //otherwise:
        currentPlayer = player1; //set currentplayer to player 1
    }
    
    //                                                      WINNER CHECKS:
    //---------------------------------------------------------------------------------------------------------------------------------

    //for rows horizontal
    for (int currentRow = 0; currentRow < 3; currentRow++){ //'scroll' through all 3 rows
        if (board[currentRow][0] !=' ' && board[currentRow][0] == board[currentRow][1] && board[currentRow][1] == board[currentRow][2]){ 
            //if the whole row is equal:
            winner = board[currentRow][0]; //set the winner equal to the value in the space (would be X or O for player 1/2)
        }
    }

    //for colums vertical
    for (int currentColum = 0; currentColum < 3; currentColum++){ 
        if (board[0][currentColum] !=' ' && board[0][currentColum] == board[1][currentColum] && board[1][currentColum] == board[2][currentColum]){
            //if the whole colum is equal:
            winner = board[0][currentColum]; //set the winner equal to the value in the space 
        }
    }

    if (board[0][0] !=' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){ //check the top left-bottom right diagonal
        //if the values are equal:
        winner = board [0][0]; //set the winner equal to the value

    } else if (board[0][2] !=' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) { //check the top right-bottom left diagonal
        //if the values are equal:
       winner = board[0][2]; //set the winner equal to the value
    }
    }

    if (winner !=' '){ //if winner has a value:
        cout << winner << " is the winner! Congratulations!" << endl; //output the winner to the console
    } else { //otherwise
        cout << "There was a Tie!" << endl; //print that there was a tie to the console
    }

} //end :)