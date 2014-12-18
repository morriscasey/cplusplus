/*Name: Casey Morris
 *Date: 9/27/2014
 *Program name: Sort Analyzer
 *Purpose: This application compares the Bubble Sort to the Selection Sort and prints out 
 *how many times each one swaps data between two elements.    
 *Time: 1hr 30mins 
 */

#include <iostream>
#include <cstdlib>
using namespace std;

//Prototype
void random_fill(int array1[]);   // Fills random integers into first array 
int bubble_sort(int array1[]);    // Function that uses bubble sort and keeps count of number of swaps.
int selection_sort(int array2[]); // Function that uses selection sort and keeps count of number of swaps
void print_results(int,int);	  // Display the number of swaps for bubble and selection sort.

const int SIZE = 100;

int main()
{
	// Declarations to keep track of final count for selection and bubble sort.
	int swapCountBubble = 0;
	int swapCountSelection = 0;

	// Declare two int arrays to store numbers to be sorted
	int arrayBubble[SIZE];
	int arraySelection[SIZE];

	// Fill random integers into first array 
	random_fill(arrayBubble);

	// For loop to copy random integers into second array
	for (int copy = 0; copy < SIZE; copy++)
	{
		arraySelection[copy] = arrayBubble[copy];
	}

	// Runs arrayBubble through bubble_sort function and outputs count to swapCountBubble.
	swapCountBubble = bubble_sort(arrayBubble);

	// Runs arraySelection through selection_sort function and outputs count to swapCountBubble.
	swapCountSelection = selection_sort(arraySelection);
	
	// Display the number of swaps for bubble and selection sort.
	print_results(swapCountBubble,swapCountSelection);

	cin.ignore();
	cin.get();

	return 0;
}

void random_fill(int array1[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		array1[i] = rand();
	}
};


int bubble_sort(int array1[SIZE])
{

	bool swap = true;
	int temp;
	int amountSwapped = 0;

	while(swap)
	{
		swap = false;

		// Starts with the first index of 0 and loops upto the last element
		for (int counter = 0; counter < (SIZE -1); counter ++)
		{
			// Compares the integer from the array[counter] and looks at the next index over.
			// if the inital integer is greater than the next the two swap integers.
			if (array1[counter] > array1[counter + 1])
			{
				temp = array1[counter];
				array1[counter] = array1[counter + 1];
				array1[counter + 1] = temp;
				// Counter to keep track of how many times the integers are swapped each pass.
				amountSwapped ++;
				swap = true;
			}
		}
	}
	return amountSwapped;

};


int selection_sort(int array2[SIZE])
{
	int amountSwapped = 0;
	int startPos;
	int lowestIndex;
	int lowestValue;

	// Starts with the first index of 0 and loops upto the last element
	for (startPos = 0; startPos < (SIZE -1); startPos++)
	{
		// The array's index and its value are stored as the lowest index and value.
		lowestIndex = startPos;
		lowestValue = array2[startPos];
		// Loop goes through the remaining integers in the array, looks to see if any
		// other integer is lower, and changes the lowestIndex and lowestValue to what was found.
		for(int i = startPos +1; i < SIZE; i++)
		{
			if(array2[i] < lowestValue)
			{
				lowestValue = array2[i];
				lowestIndex = i;
			}
		}
		// The array2[starpos] and array2[lowestIndex] swap values.
		array2[lowestIndex] = array2[startPos];
		array2[startPos] = lowestValue;
		// Counter to keep track of how many times the integers are swapped after each pass of the loop.
		amountSwapped++;
		
	}
	return amountSwapped;
};

void print_results(int bubble, int selection)
{
	// Prints out the results of how many times the Bubble Sort and Selection Sort swapped integers while sorting.
	cout << "Both sorts are complete!\nThe Bubble Sort swapped integers " << bubble << " times from an array of " << SIZE << ".\n";
	cout << "The Selection Sort swapped integers " << selection << " times from an array of " << SIZE << ".\n";
};

