#include "Main.h"
#include "HelperFunctions.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RandomizedQuickSort.h"

const int NUMBER_OF_NUMBERS = 100;//200,000

void InputNumbers(string inputFile, int theArray[]);



void RunAndOutputTheSorts(int theArray[], string sortToUse, string message);

int main(int argc, char** argv)
{
	int data[NUMBER_OF_NUMBERS];
	
	InputNumbers("random.txt", data);
	
	PrintArrayToConsole(data, NUMBER_OF_NUMBERS);
	
	RunAndOutputTheSorts(data, "Bubble Sort", "Random Order");
	//RunAndOutputTheSorts(data, "Insertion Sort", "Random Order");
	//RunAndOutputTheSorts(data, "Merge Sort", "Random Order");
	
	
	//RunAndOutputTheSorts(data, "Quick Sort", "Random Order");
	//RunAndOutputTheSorts(data, "Randomized Quick Sort", "Random Order");
	
	PrintArrayToConsole(data, NUMBER_OF_NUMBERS);
	
	//BubbleSort(data, SIZE);
	//InsertionSort(data, NUMBER_OF_NUMBERS);
	//MergeSort(data, 0, (SIZE - 1));
	//QuickSort(data, 0, (SIZE - 1));
	//RandomizedQuickSort(data, 0, (SIZE - 1));
	
	
	
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