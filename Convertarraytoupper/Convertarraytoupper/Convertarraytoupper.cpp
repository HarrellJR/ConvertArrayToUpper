/*Jeremy harrell 
ITSE 1301
Programming Problem convert array to upper case
Making a program that turns lower case into upper case
This program with take some lower case letters and turn them into uppercase 
*/ 

#include "stdafx.h"
#include <iostream>

using namespace std;


int main() {

	//making an int for the Sequence of letters
	int intLetter; 

	//input
	char chrInput[50];
	 
	//Program that runs the letters through so they can be capitalized 
	cout << "Enter characters : ";
	cin >> chrInput;
	for (int x = 0; x<50; x++) 
		if (chrInput[x] != 'x\0') 
			chrInput[x] = toupper(chrInput[x]); 
										  

	cout << chrInput << endl;
	
	return 0;

}

