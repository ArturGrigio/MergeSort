#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "sortSupport.h"
#include "mergeSort.h"

using namespace std;

int main()
{
	int mergeCounter = 0;
	int *intPtr = &mergeCounter;
	//Seeding the random numbers
	cout << "Please enter seed (int): ";
	int seed;
	cin >> seed;
    srand(seed);
	//-------------------Alternative to Seeding----------------
	// srand(time(NULL));

	ItemType mAry[MAX_SIZE];

	makeArray(mAry, MAX_SIZE);

	printEnds(mAry, MAX_SIZE);

	cout << "Merge sort\n";
	mergeSort(mAry, 0, MAX_SIZE-1, intPtr);
	cout << "Number of Swaps: " << *intPtr << endl;

	printEnds(mAry, MAX_SIZE);
 	
    system("pause");
    return 0;
}