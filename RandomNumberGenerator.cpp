#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>



const int NUMBER_OF_NUMBERS = 20000;

void OutputRandomNumbers();
void OutputAscendingNumbers();
void OutputDescendingNumbers();
void OutputSameNumber();
void OutputRandomWithRepeatNumbers();

using namespace std;

int main() 
{
	OutputRandomNumbers();
	OutputAscendingNumbers();
	OutputDescendingNumbers();
	OutputSameNumber();
	OutputRandomWithRepeatNumbers();
	return 0;
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