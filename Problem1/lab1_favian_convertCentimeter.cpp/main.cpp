// CMPSC125  
// Project:  Lab 1
// Author: Favian Fernande
// File Name: lab1_favian_Centemiter.cpp
// Date:  Jan 21, 2018
/*
Description: Write a program that takes length as input in feet and inches. 
The program should then convert the lengths in centimeters and display it on screen. 
Use the following name constants.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main ()
{
	int feet, inches;
	int totalInches;
	double centimeter;
        double INCHES_PER_FOOT=12;
        double CENTIMETERS_PER_INCH=2.54;
	cout << "Enter two integers, one for feet and one for inches: "; 
	cin >> feet >> inches;
	cout << endl;
        
	cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches. " << endl; 
	
        totalInches = INCHES_PER_FOOT * feet + inches;
	cout << "The total number of inches = " << totalInches <<" inches"<< endl;
	centimeter = CENTIMETERS_PER_INCH * totalInches;
	cout << "The number of centimeters = " << centimeter <<" centimeters"<< endl;
return 0;
}