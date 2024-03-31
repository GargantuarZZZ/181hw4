/*
# Author: HanliangZhang
# BannerID: 001400267
# Course: CS 181
# Assignment: PA4
# Date Assigned: Monday, March 18, 2024
# Date/Time Due: Saturday, March 30, 2024 -- 11:55 pm
# Description: This program will exercise ObjectOriented concepts with C++.
# Certification of Authenticity:
 I certify that this assignment is entirely my own work.
*/


#include <iostream>
#include <iomanip>
#include <vector>
#include "Manager.h"
using namespace std;

double mx,sum,avg;
string mxname;

int main() {
	int n;
	cout << "Enter number of managers: ";
	cin >> n;

	Manager* managers[100];

	for (int i = 0; i < n; ++i) {
		string name;
		double wage, hours, bonus;

		cout << "Enter manager " << i << " name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter manager " << i << " hourly wage: ";
		cin >> wage;

		cout << "Enter manager " << i << " hours worked: ";
		cin >> hours;

		cout << "Enter manager " << i << " bonus: ";
		cin >> bonus;

		managers[i]= new Manager(name, wage, hours, bonus);
	}



	for (int i=0; i < n ; ++i) {
		sum +=  managers[i]->calcPay();
		if (managers[i]->calcPay() > mx) {
			mx = managers[i]->calcPay();
			mxname = managers[i]->getName();
		}
	}


	avg = sum / n;

	cout << "Highest paid manager is " << mxname << " who is paid $" << fixed << setprecision(2) << mx << endl;
	cout << "Average pay is $" << fixed << setprecision(2) << avg << endl;
	for (int i=0; i < n ; ++i) {
		delete managers[i];
	}

	return 0;
}