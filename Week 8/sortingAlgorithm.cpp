/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: The program will sort an array of 10 numbers in least-to-greatest order.
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience
 
int main(){ //start main
    const int TOTAL_SIZE = 10; //set array size to 10
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4}; //initialize the array with the specified integers

    for(int count = 0; count < TOTAL_SIZE; count++){ //set count = 0, if count is less than total size: add 1 to count,                    

        //Sets how many passes the algorithm will make through the array. 
        
        for(int i = 0; i < TOTAL_SIZE - 1; i++){ //set i (index) equal to zero, if the index is less than total size minus count and minus 1: add 1 to index,

            if(numbers[i] > numbers[i + 1]) { //if the current index is greater than the next index:
                swap(numbers[i], numbers[i + 1]); //swap them, otherwise:
            }//continue

            //compare neighbors^^^

        }//otherwise: 
    }//otherwise:

    cout <<"The index sorted in ascending order is:" << endl; 

    for(int sortedCount = 0; sortedCount < TOTAL_SIZE; sortedCount++){ // Print the whole index 
        cout << numbers[sortedCount] << endl;                          // to the console.
    }

return 0;//end
}