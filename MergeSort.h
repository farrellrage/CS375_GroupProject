#ifndef MergeSort_h
#define MergeSort_h

#include "Main.h"
#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//	
//--------------------------------------
//	data:
//		
//	left:
//		Array containing the data to sort, of the same data type as "type".
//	right:
//		Length of the "data" array.
//------------------------------------------------------------------------------
template <typename type>
void Merge(type data[], int left, int middle, int right)
{
	int leftIndex;
	int rightIndex;
	int mergedIndex;
	
	
	
	
	
	
	
	
	
} // !Merge

//------------------------------------------------------------------------------
//	
//--------------------------------------
//	data:
//		
//	left:
//		Array containing the data to sort, of the same data type as "type".
//	right:
//		Length of the "data" array.
//------------------------------------------------------------------------------
template <typename type>
void MergeSort(type data[], int left, int right)
{
	int middle;
	
	//Determine whether there is more than one element in the given array
	if (left < right)
	{
		//Calculate the middle of the array
		middle = ((left + (right - 1)) / 2);
		
		//Sort the two halves of the array
		MergeSort(data, left, middle);
		MergeSort(data, (middle + 1), right);
		
		//Merge the to halves of the array
		Merge(data, left, middle, right);
	} // !if
} // !MergeSort




#endif // !MergeSort_h