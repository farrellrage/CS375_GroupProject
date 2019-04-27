#include "Main.h"
#include "HelperFunctions.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RandomizedQuickSort.h"


const int NUMBER_OF_NUMBERS = 40000;//40,000

void InputNumbers(string inputFile, int theArray[]);

void OutputRandomNumbers();
void OutputAscendingNumbers();
void OutputDescendingNumbers();
void OutputSameNumber();
void OutputRandomWithRepeatNumbers();

void RunAndOutputTheSorts(int theArray[], string sortToUse, string message);

int main(int argc, char** argv)
{
	chrono::time_point<chrono::system_clock> start;
	chrono::time_point<chrono::system_clock> end;

	OutputRandomNumbers();
		OutputAscendingNumbers();
		OutputDescendingNumbers();
		OutputSameNumber();
		OutputRandomWithRepeatNumbers();

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

		InputNumbers("RandomWithRepeats.txt", theArray);
		RunAndOutputTheSorts(theArray, "Bubble Sort", "Random Order With Repeat Numbers");

		PrintDividerToConsole(100, '*');

		//Merge Sort-------------------------------------------------------------------------
		/*InputNumbers("AllSameValue.txt", theArray);
		RunAndOutputTheSorts(theArray, "Merge Sort", "All Same Value");

		InputNumbers("Ascending.txt", theArray);
		RunAndOutputTheSorts(theArray, "Merge Sort", "Ascending Order");

		InputNumbers("Descending.txt", theArray);
		RunAndOutputTheSorts(theArray, "Merge Sort", "Descending Order");

		InputNumbers("random.txt", theArray);
		RunAndOutputTheSorts(theArray,  "Merge Sort", "Random Order");

		InputNumbers("RandomWithRepeats.txt", theArray);
		RunAndOutputTheSorts(theArray, "Merge Sort", "Random Order With Repeat Numbers");*/

		//Insertion Sort---------------------------------------------------------------------
		InputNumbers("AllSameValue.txt", theArray);
		RunAndOutputTheSorts(theArray, "Insertion Sort", "All Same Value");

		InputNumbers("Ascending.txt", theArray);
		RunAndOutputTheSorts(theArray, "Insertion Sort", "Ascending Order");

		InputNumbers("Descending.txt", theArray);
		RunAndOutputTheSorts(theArray, "Insertion Sort", "Descending Order");

		InputNumbers("random.txt", theArray);
		RunAndOutputTheSorts(theArray, "Insertion Sort", "Random Order");

		InputNumbers("RandomWithRepeats.txt", theArray);
		RunAndOutputTheSorts(theArray, "Insertion Sort", "Random Order With Repeat Numbers");

		//Quick sort----------------------------------------------------------------------
		//InputNumbers("AllSameValue.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Quick Sort", "All Same Value");

		//InputNumbers("Ascending.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Quick Sort", "Ascending Order");

		//InputNumbers("Descending.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Quick Sort", "Descending Order");

		//InputNumbers("random.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Quick Sort", "Random Order");

		//InputNumbers("RandomWithRepeats.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Quick Sort", "Random Order With Repeat Numbers");
		//Randomized Quick Sort-------------------------------------------------------------
		//InputNumbers("AllSameValue.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "All Same Value");

		//InputNumbers("Ascending.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Ascending Order");

		//InputNumbers("Descending.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Descending Order");

		//InputNumbers("random.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Random Order");

		//InputNumbers("RandomWithRepeats.txt", theArray);
		//RunAndOutputTheSorts(theArray, "Randomized Quick Sort", "Random Order With Repeat Numbers");

		
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
	
}

void OutputRandomNumbers()
{
	ofstream fout;
	fout.open("random.txt");
	srand(time(0));

	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		fout << (rand() % 289 + 165) << std::endl;

	}
	fout.close();
}
void OutputAscendingNumbers()
{
	ofstream fout;

	//ascending---------------------------------------

	fout.open("Ascending.txt");
	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		fout << index << endl;
	}

	fout.close();
}
void OutputDescendingNumbers()
{
	ofstream fout;
	//descending =---------------------------------------------

	fout.open("Descending.txt");
	for (int index = NUMBER_OF_NUMBERS; index > 0; index--)
	{
		fout << index << endl;
	}


	fout.close();
}
void OutputSameNumber()
{
	ofstream fout;

	//all same value------------------------------------------
	fout.open("AllSameValue.txt");
	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		fout << "4" << endl;
	}
	fout.close();
}
void OutputRandomWithRepeatNumbers()
{
	ofstream fout;
	//random with repeat values-----------------------------

	fout.open("RandomWithRepeats.txt");

	int repeatAgain = (rand() % 289 + 165);
	int temp = 0;

	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		temp = (rand() % 289 + 165);


		fout << temp << endl;
		if (index % 36 == 2 && index != (NUMBER_OF_NUMBERS - 1))
		{
			fout << temp << endl;
			index++;
		}


		if (index % 42 == 2 && index != (NUMBER_OF_NUMBERS - 1))
		{
			fout << repeatAgain << endl;
			index++;
		}


	}

	fout.close();
}

void RunAndOutputTheSorts(int theArray[], string sortToUse, string message)
{
	//initialize
	chrono::time_point<chrono::system_clock> start;
	chrono::time_point<chrono::system_clock> end;
	int counter = 0;

	if (sortToUse == "Merge Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		MergeSort(theArray, 0, NUMBER_OF_NUMBERS, counter );
		end = chrono::system_clock::now();
	}
	//if (sortToUse == "Quick Sort")
	//{
	//	//count and sort
	//	start = chrono::system_clock::now();
	//	QuickSort(theArray, 0, NUMBER_OF_NUMBERS, counter);
	//	end = chrono::system_clock::now();
	//}
	if (sortToUse == "Insertion Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		InsertionSort(theArray, NUMBER_OF_NUMBERS, counter);
		end = chrono::system_clock::now();
	}
	if (sortToUse == "Bubble Sort")
	{
		//count and sort
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS, counter);
		end = chrono::system_clock::now();
	}
	//if (sortToUse == "Randomized Quick Sort")
	//{
	//	//count and sort
	//	start = chrono::system_clock::now();

	//	end = chrono::system_clock::now();
	//}

	//output
	chrono::duration<double> overAllTime = end - start;
	cout << sortToUse << " " << message << " used " << counter << " comparisons" <<endl;
	cout << overAllTime.count() << endl;



}