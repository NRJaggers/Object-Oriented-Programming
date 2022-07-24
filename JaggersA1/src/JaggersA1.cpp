//============================================================================
// Name        : JaggersA1.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void welcome ();
void goodbye ();
void dynAlloc (int, int * &) ;
void insertionSort (int *, int, int *) ;
void displayArray (int *, int) ;
int linearSearch (int *, int, int, int &) ;
int binarySearch (int *, int, int, int &) ;
void displayResults (int, int, int);

int main()
{
	// declarations
	int * arrayUS = NULL, * arrayS = NULL; 				// arrayUS = unsorted array, arrayS = sorted array
	int size = 50, searchValue = 0 ;					// size = size of array, searchValue = value set by user
	int iterations = 0, indexFound = 0 ;				// iterations = holds number of repetitions of the search
														// indexFound = holds index value for searchValue, if found
	// welcome
	welcome() ;

	// allocation and initialization
	cout << "Allocating space for arrays...\n\n" ;
	dynAlloc(size ,arrayUS) ;							// allocate memory to arrayUS
	dynAlloc(size ,arrayS)  ;							// allocate memory to arrayS

	cout << "Initializing arrays with random numbers 0-100...\n\n";
	srand(time(0)) ;									// initialize random to seed time of zero

	for (int i = 0 ; i < size ; i++ )
		{
			arrayUS[i] = (rand()% 100) ;				// filling array with random numbers
		}

	// sorting
	cout << "Unsorted array : \n" ;
	displayArray(arrayUS, size);						// showing contents of array

	cout << "Sorting array...\n\n" ;
	insertionSort(arrayUS, size, arrayS) ;				// copying and sorting array
	cout << "Sorted array : \n" ;
	displayArray(arrayS, size) ;						// showing contents of array

	// searching
	while ( searchValue >= 0)
	{
		cout << "*****************************************************\n"
		 	 << "Enter an positive integer (0-100) to search for or negative number to exit : " ;
		cin  >> searchValue ;

		while(searchValue > 100)
		{
			cout << "Error! invalid search value. \nPlease enter a number between 0-100 or a negative value: " ;
			cin  >> searchValue ;
		}

		if (searchValue >= 0 )
		{
			cout << "\nInvoking Linear Search on sorted array:" ;
			indexFound = linearSearch (arrayS, size, searchValue, iterations) ;
			displayResults(searchValue, indexFound, iterations) ;

			cout << "Invoking Binary Search on sorted array:" ;
			indexFound = binarySearch (arrayS, size, searchValue, iterations) ;
			displayResults(searchValue, indexFound, iterations) ;
		}

	}

	// goodbye and release memory
	goodbye();
	delete[] arrayUS ;									// Release memory
	delete[] arrayS ;									// Release memory

	return 0;
}
void welcome ()
{
	//welcome message and short description
	cout << "Hello and Welcome to the program! \n\n"
		 << "This program practices fundamentals of pointers \n"
		 << "and arrays. Arrays will be created dynamically and \n"
		 << "filled in randomly with numbers 0-100. You, the user \n"
		 << "will then be asked to enter a number to search for.\n"
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}
void goodbye ()
{
	//goodbye message
	cout << "\n\n***************************************\n\n"
		 << "Thank you and have a wonderful rest of your day!" ;
}
void dynAlloc (int sizeAlloc, int * &arrayLoc)
{
	arrayLoc = new int[sizeAlloc] ;						// sizeAlloc = size of memory to allocate to array,
														// arrayLoc  = pointer to location of first element in array
	return ;
}
void insertionSort (int *unsorted, int arraySize, int *sorted)
{
	int sortThis ;

	for (int i = 0 ; i < arraySize ; i++)
		{
			sorted[i] = unsorted[i] ;
		}

	for (int x = 1, y ; x < arraySize ; x++)
	{
		sortThis = sorted[x] ;

		for (y = x; (y > 0) and (sortThis < sorted[y-1]) ; y--)
		{
			sorted[y] = sorted[y-1] ;

			//displayArray(sorted, arraySize);	// trouble shooting ; see how sort works
			//cout<< endl ;
		}
		sorted[y] = sortThis ;
	}


	return ;
}
void displayArray (int * array, int arraySize)
{
	for (int i = 0 ; i < arraySize ; i++)				// step through array
		{
			cout << array[i] << "\t" ;					// tab each entry

			if ((i+1)%5 == 0)							// every 5th entry line break
			{
				cout << endl << endl ;
			}
		}
	return ;
}
int linearSearch (int *array, int arraySize, int value, int &repetitions)
{
	int index = -1 ;									// index stays -1 if not found
	bool found = false ;
	repetitions = 0 ;									//counter variable, alias: iterations

	while (repetitions < arraySize && !found)			// keeps searching while bounds aren't exceeded
	{													// and value isn't found
		if (value == array[repetitions])
				{
					index = repetitions ;
					found = true ;
				}
		repetitions++ ;									// increments counter
	}

	return index ;										// returns position of value if found, otherwise -1
}
int binarySearch (int *array, int arraySize, int value, int &repetitions)
{
	int index = -1 ;
	int least = 0, greatest = arraySize-1, middle = 0; 	// variable (initialized) for binary search
	bool found = false ;
	repetitions = 0 ;									// counter variable, alias: iterations

	while ( least <= greatest && !found)				// keeps searching while bounds aren't exceeded
	{													// and value isn't found
		middle = (least + greatest) / 2 ;
		if (value > array[middle])						// change least based on position of target value
			least = middle + 1 ;
		else if (value < array[middle])					// change greatest based on position of target value
			greatest = middle - 1 ;
		else											// if not greater or less than, must be equal to
			{											// therefore value is found
				index = middle ;
				found = true ;
			}

		repetitions++ ;									// increments counter
	}

	return index ;										// returns position of value if found, otherwise -1
}
void displayResults (int value, int index, int repetitions)
{
	if (index != -1)									// if value was found at specific index
	{
		cout << endl << "The value " << value << " was found at index: " << index << endl ;
		cout << "Number of iterations: " << repetitions << endl << endl ;
	}
	else												// if value was not found
	{
		cout << endl << "The value " << value << " was not found in the array."<< endl ;
		cout << "Number of iterations: " << repetitions << endl << endl ;
	}
}
