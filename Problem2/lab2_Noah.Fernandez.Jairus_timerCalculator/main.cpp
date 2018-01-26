// CMPSC125  

// Project:  Lab 2

// Author:  Noah Kraus, Fernandez Fabian, Jairus Lin

// File Name: lab2_Noah.Fernandez.Jairus_timerCalculator.cpp

// Date:  Jan.25, 2018

// Description: This program reads in an integer as input and yield the number of hours, minutes, seconds and days


#include <iostream>
using namespace std;


int main() {
	int seconds, minutes, hours, days;	//seconds to be read
	cout << "Enter seconds: ";
	cin >> seconds;
	
	if (seconds < 60) {
		cout << seconds;
	}
	
	else if (seconds < 3600){
		minutes = seconds / 60;
		seconds = seconds % 60;
	}
	
	else if (seconds < 86400) {
		hours = seconds / 3600;
		minutes = (seconds % 3600)/60;
		seconds = (seconds % 86400)%60%60;
	}

	else {
		days = seconds / 86400;
		hours = (seconds % 86400)/3600;
		minutes = (seconds % 3600) / 60;
		seconds = (seconds % 86400) % 60 % 60;
	}

	cout << "days: "<< days << ", hours: " << hours << ", minutes: " << minutes << ", seconds: " << seconds << endl;

	return  0;
}