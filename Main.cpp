#include "Main.h"
#include "HelperFunctions.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RandomizedQuickSort.h"

const int NUMBER_OF_NUMBERS = 100000;

void InputNumbers(string inputFile, int theArray[]);

void RunAndOutputTheSorts(int theArray[], string sortToUse, string message);

int main(int argc, char** argv)
{
	int theArray[NUMBER_OF_NUMBERS];
	
	//Bubble Sort-----------------------------------------------------------------------------
	InputNumbers("AllSameValue.txt", theArray);
	RunAndOutputTheSorts(theArray, "Bubble Sort", "All Same Value");

	InputNumbers("Ascending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Bubble Sort", "Ascending Order");

	InputNumbers("Descending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Bubble Sort", "Descending Order");

	InputNumbers("random.txt", theArray);
	RunAndOutputTheSorts(theArray, "Bubble Sort", "Random Order");

	PrintDividerToConsole(100, '*');

	//Merge Sort-------------------------------------------------------------------------
	InputNumbers("AllSameValue.txt", theArray);
	RunAndOutputTheSorts(theArray, "Merge Sort", "All Same Value");

	InputNumbers("Ascending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Merge Sort", "Ascending Order");

	InputNumbers("Descending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Merge Sort", "Descending Order");

	InputNumbers("random.txt", theArray);
	RunAndOutputTheSorts(theArray,  "Merge Sort", "Random Order");

	PrintDividerToConsole(100, '*');

	//Insertion Sort---------------------------------------------------------------------
	InputNumbers("AllSameValue.txt", theArray);
	RunAndOutputTheSorts(theArray, "Insertion Sort", "All Same Value");

	InputNumbers("Ascending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Insertion Sort", "Ascending Order");

	InputNumbers("Descending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Insertion Sort", "Descending Order");

	InputNumbers("random.txt", theArray);
	RunAndOutputTheSorts(theArray, "Insertion Sort", "Random Order");

	PrintDividerToConsole(100, '*');

	//Quick sort----------------------------------------------------------------------
	InputNumbers("AllSameValue.txt", theArray);
	RunAndOutputTheSorts(theArray, "Quick Sort", "All Same Value");

	InputNumbers("Ascending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Quick Sort", "Ascending Order");

	InputNumbers("Descending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Quick Sort", "Descending Order");

	InputNumbers("random.txt", theArray);
	RunAndOutputTheSorts(theArray, "Quick Sort", "Random Order");

	PrintDividerToConsole(100, '*');

	//Randomized Quick Sort-------------------------------------------------------------
	InputNumbers("AllSameValue.txt", theArray);
	RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "All Same Value");

	InputNumbers("Ascending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Ascending Order");

	InputNumbers("Descending.txt", theArray);
	RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Descending Order");

	InputNumbers("random.txt", theArray);
	RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Random Order");
	
	return 0;
} // !main

void InputNumbers(string inputFile, int theArray[])
{
	ifstream fin;
	fin.open(inputFile);

	int temp;

	fin >> temp;
	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		theArray[index] = temp;

		fin >> temp;
	}
	fin.close();
}

void RunAndOutputTheSorts(int theArray[], string sortToUse, string message)
{
	//initialize
	chrono::time_point<chrono::system_clock> start;
	chrono::time_point<chrono::system_clock> end;

	if (sortToUse == "Merge Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		MergeSort(theArray, 0, NUMBER_OF_NUMBERS-1);
		end = chrono::system_clock::now();
	}
	if (sortToUse == "Quick Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		QuickSort(theArray, 0, NUMBER_OF_NUMBERS-1);
		end = chrono::system_clock::now();
	}
	if (sortToUse == "Insertion Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		InsertionSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
	}
	if (sortToUse == "Bubble Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
	}
	if (sortToUse == "Randomized Quick Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		RandomizedQuickSort(theArray, 0, NUMBER_OF_NUMBERS-1);
		end = chrono::system_clock::now();
	}

	//output
	chrono::duration<double> overAllTime = end - start;
	cout << sortToUse << " " << message << endl;
	cout << overAllTime.count() << " seconds"<<endl;
}
