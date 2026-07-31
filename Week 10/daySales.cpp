/*
@author: Elijah Silkworth
@date: 7/30/2026
@purpose: Take the number of days from the user, prompt the user to enter sales for each day. Write the amounts for each day to an associated text file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream dataFile; 
    int days = 0; //set days default value to zero
    double sales = 0.0; //set sales default value to zero

    cout << "Input the amount of days you would like to enter sales for: " << endl; //prompt the user to enter how many days to enter data for
    cin >> days; //take the input as days

   dataFile.open("Week10Lab1.txt" , ios::out); //open/create the text file

   cout << "Enter the sales for day 1: " << endl; //prompt the user to enter sales for day one
   cin >> sales; //take the input for sales
   dataFile << sales << endl; //write sales to the file
   dataFile.close(); //close the file

   for(int i = 1; i <= days - 1; i++){
    dataFile.open("Week10Lab1.txt" , ios::out | ios::app); //open the file in append mode (continues writing after closed)
    cout << "Enter the sales for day " << (i + 1) << endl; //prompt the user to enter the sales
    cin >> sales; //take the input as sales
    dataFile << sales << endl; //write sales to the datafile
    dataFile.close(); //close the file
   }
return 0;
}

