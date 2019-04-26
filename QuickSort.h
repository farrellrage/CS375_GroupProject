#ifndef QuickSort_h
#define QuickSort_h

#include "Main.h"
#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//Merge: Merges the subarrays defined by the left, middle, and right indecies
//	into the section of the array defined by the left and right indecies.
//--------------------------------------
//	data:
//		Array containing the data to sort, of the same data type as "type".
//	left:
//		Index of the data array bounding the leftmost element to consider.
//	middle:
//		Index of the data array indicating the middle element in the section
//		to consider.
//	right:
//		Index of the data array bounding the rightmost element to consider.
//------------------------------------------------------------------------------
template <typename type>
void QuickSort(type data[], int left, int right)
{
	//Holds the partition index to sort across
	int partition;
	
	//Determine whether the first element's value is less than the last
	//element's value
	if (left < right)
	{
		//Calculate the middle element 	of the array to be the pivot
		partition = 
	} // !if
} // !QuickSort

#endif // !QuickSort_h