/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: Print the number list to the console using a for loop. 
*/

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 7;
    int numberList[SIZE] = {1, 2, 4, 8};

    for(int count = 0; count < SIZE; count++){
        cout << numberList[count] << endl;
    }
return 0;
}