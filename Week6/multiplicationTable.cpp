/*
@author: Elijah Silkworth
@date: 7/4/2026
@purpose: Capture an integer from the user, display the multiplication table of that integer from 0-12
*/

#include <iostream>
using namespace std;

int main() {
    int minNum = 0;
    int maxNum = 12;
    int userNum;

    cout << "Enter an integer and the program will generate a multiplication table for (x*1-12):\n";
    cin >> userNum;


    cout << "Integer: | Multiplied By: | Equals:\n";
    cout << "-----------------------------------\n";

    for (int i = minNum; i <= maxNum; i++) {

        int multNum = (i * userNum);
        cout << userNum << "\t\t" << i << "\t\t" << multNum << endl;
    }

    return 0;
}