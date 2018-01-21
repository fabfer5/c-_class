// CMPSC125  
// Project:  Lab 1
// Author: Noah Kraus, Fabian Fernandez, Jairus Lin
// File Name: lab1_jairus_grossAmount.cpp
// Date:  Jan 23, 2018
// Description: Using the gross pay, calculate the deductions and the net pay
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
double grosspay;
const double FEDERAL_INCOME_TAX = .20;
const double STATE_TAX = .04;
const double SOCIAL_SECURITY_TAX = .035;
const double MEDICARE_TAX = .0275;
const double PENSION_PLAN = .06;
const int HEALTH_INSURANCE = 80.00;
double netpay;
double net_pay;


int main()
{ 
    

    
cout << "What is the gross pay?" << endl;
cin >> grosspay;

double FEDERAL_TAX= grosspay*.20;
double STATETAX = grosspay*.04;
double SOCIALSECURITYTAX = grosspay*.035;
double MEDICARETAX = grosspay*.0275;
double PENSIONPLAN = grosspay*.06;
double HEALTHINSURANCE= 80.00;
double net_pay=FEDERAL_TAX+STATETAX+SOCIALSECURITYTAX+MEDICARETAX+PENSIONPLAN+HEALTHINSURANCE;
double netpay= grosspay-net_pay;

cout << "the federal taxes you will be paying is : $"<<FEDERAL_TAX << endl;
cout << "the STAT taxes you will be paying is : $"<<STATETAX<< endl;
cout << "the SOCIAL SECURITY taxes you will be paying is : $"<<SOCIALSECURITYTAX << endl;
cout << "the MEDI CARE taxes you will be paying is : $"<<MEDICARETAX << endl;
cout << "the PENSIONPLAN you will be paying is : $"<<PENSIONPLAN << endl;
cout << "the HEALTHINSURANCE you will be paying is : $"<<HEALTHINSURANCE << endl;
cout << "the net pay is :$ "<<netpay << endl;

return 0;
}