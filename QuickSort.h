#ifndef QuickSort_h
#define QuickSort_h

#include "Main.h"
#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//Partition: 
//--------------------------------------
//	data:
//		Array containing the data to sort, of the same data type as "type".
//	left:
//		Index of the data array bounding the leftmost element to consider.
//	right:
//		Index of the data array bounding the rightmost element to consider.
//------------------------------------------------------------------------------
template <typename type>
int Partition(type data[], int left, int right)
{
	//Get the middle element of the array as the pivot element
	int pivot = data[floor((left + right) / 2)];
	
	//Index to maintain the space in the array to swap with any other element in
	//the array that is smaller than the pivot element
	int swapIndex = left;
	
	//For each element in the array
	for (int index = left; index < right; index++)
	{
		//
		
		
		
		
	} // !for
	
} // !Partition

//------------------------------------------------------------------------------
//QuickSort: 
//--------------------------------------
//	data:
//		Array containing the data to sort, of the same data type as "type".
//	left:
//		Index of the data array bounding the leftmost element to consider.
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