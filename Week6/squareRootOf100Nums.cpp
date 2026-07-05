/*
@author: Elijah Silkworth
@date: 7/4/2026
@purpose: Take the square root of 100 numbers and output the results neatly to the console.
*/

#include <iostream> //include iostream for input and output
using namespace std; //include the standard namespace for convenience

int main(){ //start code
    const int minNum = 0 , maxNum = 100; //set minNum = 0 and maxNum = 100. Set as constants because they should never change.
    int num; //initialize num

    cout <<"Number | Number Squared\n" ; //output the table header to the console
    cout <<"-----------------------\n"; //output a seperator line to the console

    for( num = minNum; num <= maxNum; num++) { //set num equal to minNum, if num is less than or equal to maxNum, do the following: add 1 incrementally to num,
        cout << num << "\t\t"; // output the number, tab right twice,
        cout << (num * num) << endl; // square num 
    }

return 0; //end code
} 