/*
@author: Elijah Silkworth
@date: 6/18/2026
@purpose: Determine whether an entered letter is a vowel or consonant. Exclude numbers.
*/

#include <iostream>
using namespace std;

int main(){
    char ch;

    cout <<"Enter a letter and the program will determine if it's a vowel or consonant.";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

        if (
            ch == 'a' || ch == 'A' || 
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' || 
            ch == 'o' || ch == 'O' || 
            ch == 'u' || ch == 'U'
        ) {

        cout <<"The letter you entered is a vowel.";
        }
        
        else 
        {
        cout  <<"The letter you entered is a consonant.";
        }
    }
    else {
        cout <<"What you entered is not a letter silly. Try something between A and Z. ";
    }
    
    return 0;
}