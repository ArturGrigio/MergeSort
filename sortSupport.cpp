#include <cstdlib>
#include <iostream>
#include "sortSupport.h"

using namespace std;

// Assumes seed has been done
// creates data for the array
void makeArray(int ary[], int max)
{
	for (int index = 0; index < max; index++)
		ary[index] = rand() % MAX_DIGITS;
}

// prints the first 10 and last 10 items of an array
void printEnds(int ary[], int max)
{
	cout << "First 10: ";
	for (int index = 0; index < 10; index++)
		cout << ary[index] << " ";
	cout << endl << "Last 10: ";
	for (int index = max - 10; index < max; index++)
		cout << ary[index] << " ";
	cout << endl;
}