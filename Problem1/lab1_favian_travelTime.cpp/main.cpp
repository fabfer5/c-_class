// CMPSC125  
// Project:  Lab 1
// Author: Favian Fernande
// File Name: lab1_favian_convertCentimeter.cpp
// Date:  Jan 21, 2018
/*
Description: Write a program that takes length as input in feet and inches. 
The program should then convert the lengths in centimeters and display it on screen. 
Use the following named constants.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
const double CENTIMETERS_PER_INCH = 2.54;	//Named constants
const int INCHES_PER_FOOT = 12;			//Named constants


int main ()
{
	
	double speed,distance ;
        double time;
	cout << "Enter two integers, one for speed and one for distance: "; 
	cin >> speed >> distance;
	cout << endl;
        
	cout << "The numbers you entered are " << speed << " for speed and " << distance << " for distance. " << endl; 
	
        time = distance/speed;
	cout << "The total time = " << time <<" howers/minets"<< endl;
	
        
return 0;
}