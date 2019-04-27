#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//PrintDividerToConsole: Outputs a divider line to the console
//--------------------------------------
//	length:
//		Length that the divider will be printed as
//	character:
//		Character that the divider will be consisted of
//------------------------------------------------------------------------------
void PrintDividerToConsole(int length, char character)
{
	// Output a divider line to the console
	cout << setw(length) << setfill(character) << character << setfill(' ')
		<< endl;
} // !PrintDividerToConsole

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
void PrintDivider(ostream& out, int length, char character)
{
	// Output a divider line to the specified destination
	out << setw(length) << setfill(character) << character << setfill(' ')
		<< endl;
} // !PrintDivider

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
void PrintCenteredMessage(ostream& out, string message, int centerWidth)
{
	//Holds the value that will center the given message on the given width
	int centerOfScreen;

	// Calculate the center of the screen for the message
	centerOfScreen = static_cast<int>((centerWidth + message.length()) / 2);

	// Output the centered message to the specified destination
	out << right << setw(centerOfScreen) << message << endl;
} // !PrintCenteredMessage