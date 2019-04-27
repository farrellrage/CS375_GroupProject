#ifndef HelperFunctions_h
#define HelperFunctions_h

#include "Main.h"

//------------------------------------------------------------------------------
//PrintDividerToConsole: Outputs a divider line to the console
//--------------------------------------
//	length:
//		Length that the divider will be printed as
//	character:
//		Character that the divider will be consisted of
//------------------------------------------------------------------------------
void PrintDividerToConsole(int length, char character);

//------------------------------------------------------------------------------
//PrintDivider: Outputs a divider line to a designated location
//--------------------------------------
//	out:
//		Output stream object that sends output to the opened output file
//	length:
//		Length that the divider will be printed as
//	character:
//		Character that the divider will be consisted of
//------------------------------------------------------------------------------
void PrintDivider(ostream& out, int length, char character);

//------------------------------------------------------------------------------
//PrintCenteredMessage: Outputs a centered message to a designated location
//--------------------------------------
//	out:
//		Output stream object that sends output to the opened output file
//	message:
//		String message that will be centered on the given width
//	centerWidth:
//		Width that the given message will be centered over
//------------------------------------------------------------------------------
void PrintCenteredMessage(ostream& out, string message, int centerWidth);

//------------------------------------------------------------------------------
//PrintArrayToConsole: Outputs the contents of the given array to the console
//--------------------------------------
//	data:
//		Array containing the data to sort, of the same data type as "type".
//	length:
//		Length of the "data" array.
//------------------------------------------------------------------------------
template <typename type>
void PrintArrayToConsole(type data[], int length)
{
	//Determine whether the array is empty
	if (length == 0)
	{
		//Output error message to the console
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
		PrintCenteredMessage(static_cast<ofstream&>(cout),
			"Error - empty array", DIVIDER_WIDTH);
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
	} // !if
	else
	{
		//For each element in the array
		for (int index = 0; index < length; index++)
		{
			//Output the current element to the console
			cout << data[index] << endl;
		} // !for
	} // !else
} // !PrintArrayToConsole

//------------------------------------------------------------------------------
//Swap: Swaps the data pointed to be the two given pointers
//--------------------------------------
//	first:
//		The first element to swap, of type "type".
//	second:
//		The second element to swap, of type "type".
//------------------------------------------------------------------------------
template <typename type>
void Swap(type* first, type* second)
{
	//Save the value in the first pointer
	type temp = &first;

	//Copy the value in the second pointer to the first pointer
	first = second;

	//Save the value in the temp variable to the second pointer
	second = *temp;
} // !Swap

#endif // !HelperFunctions_h