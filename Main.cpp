#include "Main.h"
#include "HelperFunctions.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RandomizedQuickSort.h"


const int NUMBER_OF_NUMBERS = 200000;
//51,200

void InputNumbers(string inputFile, int theArray[]);

void OutputRandomNumbers();
void OutputAscendingNumbers();
void OutputDescendingNumbers();
void OutputSameNumber();
void OutputRandomWithRepeatNumbers();

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

		InputNumbers("AllSameValue.txt", theArray);
		start = chrono::system_clock::now();
		BubbleSort(theArray,NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
		chrono::duration<double> overAllTime = end - start;
		cout << "Bubble Sort All Same Value" << endl;
		cout << overAllTime.count() << endl;













		InputNumbers("Ascending.txt", theArray);
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
		overAllTime = end - start;
		cout << "Bubble Sort Ascending" << endl;
		cout << overAllTime.count() << endl;







		InputNumbers("Descending.txt", theArray);
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
		 overAllTime = end - start;
		cout << "Bubble Sort Descending" << endl;
		cout << overAllTime.count() << endl;






		InputNumbers("random.txt", theArray);
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
		 overAllTime = end - start;
		cout << "Bubble Sort Random" << endl;
		cout << overAllTime.count() << endl;






		InputNumbers("RandomWithRepeats.txt", theArray);
		start = chrono::system_clock::now();
		BubbleSort(theArray, NUMBER_OF_NUMBERS);
		end = chrono::system_clock::now();
		 overAllTime = end - start;
		cout << "Bubble Sort Random With Repeats" << endl;
		cout << overAllTime.count() << endl;







		////set the running time positions 
		//chrono::time_point<chrono::system_clock> start;
		//chrono::time_point<chrono::system_clock> end;
		//
		//int sameValueArray[NUMBER_OF_NUMBERS];
		//int ascendingArray[NUMBER_OF_NUMBERS];
		//int descendingArray[NUMBER_OF_NUMBERS];
		//int randomArray[NUMBER_OF_NUMBERS];
		//int randomWithRepeatArray[NUMBER_OF_NUMBERS];
		//
		////First time called
		//InputNumbers("AllSameValue.txt", sameValueArray);
		//InputNumbers("Ascending.txt", ascendingArray);
		//InputNumbers("Descending.txt", descendingArray);
		//InputNumbers("random.txt", randomArray);
		//InputNumbers("RandomWithRepeats.txt", randomWithRepeatArray);
		////bubble

		//start = chrono::system_clock::now();
		//BubbleSort(sameValueArray,NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//chrono::duration<double> overAllTime = end - start;
		//cout << "Bubble Sort All Same Value" << endl;
		//cout << overAllTime.count() << endl;



		//start = chrono::system_clock::now();
		//BubbleSort(ascendingArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Bubble Sort Ascending" << endl;
		//cout << overAllTime.count() << endl;


		//start = chrono::system_clock::now();
		//BubbleSort(descendingArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Bubble Sort Descending" << endl;
		//cout << overAllTime.count() << endl;



		//start = chrono::system_clock::now();
		//BubbleSort(randomArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Bubble Sort Random" << endl;
		//cout << overAllTime.count() << endl;



		//start = chrono::system_clock::now();
		//BubbleSort(randomWithRepeatArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Bubble Sort Random with Repeats" << endl;
		//cout << overAllTime.count() << endl;

		////--------------------------------------------------------------------------------------------------------------------------------
		////Second time called
		//InputNumbers("AllSameValue.txt", sameValueArray);
		//InputNumbers("Ascending.txt", ascendingArray);
		//InputNumbers("Descending.txt", descendingArray);
		//InputNumbers("random.txt", randomArray);
		//InputNumbers("RandomWithRepeats.txt", randomWithRepeatArray);


		////insert
		//start = chrono::system_clock::now();
		//InsertionSort(sameValueArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Insertion Sort All Same Value" << endl;
		//cout << overAllTime.count() << endl;




		//start = chrono::system_clock::now();
		//InsertionSort(ascendingArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Insertion Sort Ascending" << endl;
		//cout << overAllTime.count() << endl;



		//start = chrono::system_clock::now();
		//InsertionSort(descendingArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Insertion Sort Descending" << endl;
		//cout << overAllTime.count() << endl;




		//start = chrono::system_clock::now();
		//InsertionSort(randomArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Insertion Sort Random" << endl;
		//cout << overAllTime.count() << endl;




		//start = chrono::system_clock::now();
		//InsertionSort(randomWithRepeatArray, NUMBER_OF_NUMBERS);
		//end = chrono::system_clock::now();
		//overAllTime = end - start;
		//cout << "Insertion Sort Random with Repeats" << endl;
		//cout << overAllTime.count() << endl;

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