/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: faian
 *
 * Created on January 20, 2018, 5:30 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main ()
{
	int feet, inches;
	int totalInches;
	double centimeter;
        
	cout << "Enter two integers, one for feet and one for inches: "; 
	cin >> feet >> inches;
	cout << endl;
        
	cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches. " << endl; 
	
        totalInches = INCHES_PER_FOOT * feet + inches;
	cout << "The total number of inches = " << totalInches <<" inches"<< endl;
	centimeter = CENTIMETERS_PER_INCH * totalInches;
	cout << "The number of centimeters = " << centimeter <<" inches"<< endl;
return 0;
}