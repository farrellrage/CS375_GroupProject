#ifndef HelperFunctions_h
#define HelperFunctions_h

#include "Main.h"

//------------------------------------------------------------------------------
//PrintDivider: Outputs a divider line to a designated location
//--------------------------------------
//	fout:
//		Output file stream object that sends output to the opened output file
//	length:
//		Length that the divider will be printed as
//	character:
//		Character that the divider will be consisted of
//------------------------------------------------------------------------------
void PrintDivider(ofstream& fout, int length, char character);

//------------------------------------------------------------------------------
//PrintCenteredMessage: Outputs a centered message to a designated location
//--------------------------------------
//	fout:
//		Output file stream object that sends output to the opened output file
//	message:
//		String message that will be centered on the given width
//	centerWidth:
//		Width that the given message will be centered over
//------------------------------------------------------------------------------
void PrintCenteredMessage(ofstream& fout, string message, int centerWidth);

#endif // !HelperFunctions_h