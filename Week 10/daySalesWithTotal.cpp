/*
@author: Elijah Silkworth
@date: 7/30/2026
@purpose: Take the sales for each day entered by the user (number of days specified by user), enter sales into a text document, print the total to the bottom of the text document (formatted in dollars with cents).
*/

#include <iostream> //for input and output
#include <iomanip> 
#include <sstream>
#include <fstream>
using namespace std;

int main(){ //start
    ofstream dataFile; 

    int days = 0; //set days default value to zero
    double sales = 0.0; //set sales default value to zero
    double totalsales = 0.0; //set totalsales default value to zero

    cout << "Input the amount of days you would like to enter sales for: " << endl; //prompt the user to enter how many days to enter data for
    cin >> days; //take the input as days

   dataFile.open("Week10Lab2.txt" , ios::out); //open/create the text file

   cout << "Enter the sales for day 1: " << endl; //prompt the user to enter sales for day one
   cin >> sales; //take the input for sales
   totalsales = (totalsales + sales); //adds entered sales to total
   dataFile << sales << endl; //write sales to the file
   dataFile.close(); //close the file

   for(int i = 1; i <= days - 1; i++){
    dataFile.open("Week10Lab2.txt" , ios::out | ios::app); //open the file in amend mode (continues writing after closed)
    cout << "Enter the sales for day" << (i + 1) << ":" << endl; //prompt the user to enter the sales
    cin >> sales; //take the input as sales
    totalsales = (totalsales + sales); //adds entered sales to total
    dataFile << sales << endl; //write sales to the datafile
    dataFile.close(); //close the file
   }

   dataFile.open("Week10Lab2.txt" , ios::out | ios::app); //open the datafile
   dataFile << "\n====================" << endl; //enter separation line
   dataFile << fixed << setprecision(2); //setprecision to 2 for 2 decimal places
   dataFile << "Total Sales: $" << totalsales << endl; //output the total sales
   dataFile << "===================="; //enter another separation line

return 0; //end 
}