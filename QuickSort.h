#ifndef QuickSort_h
#define QuickSort_h

#include "Main.h"
#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//Partition: Moves all values that are smaller than the last element in the
//	array (the pivot) to the left side of the array and all values that are
//	greater than the pivot to the right side of the array.
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
	//Get the last element of the array as the pivot element
	int pivot = data[right];
	
	//Index to maintain the space in the array to swap with any other element in
	//the array that is smaller than the pivot element
	int swapIndex = left;
	
	//For each element in the array
	for (int index = left; index < right; index++)
	{
		//Determine whether the current element is greater than the pivot
		//element
		if (data[index] <= pivot)
		{
			//Swap the current element with the element at the swap location
			swap(data[swapIndex], data[index]);
			
			//Increment the swap index
			swapIndex++;
		} // !if
	} // !for
	
	//Swap the last value that is greater than the pivot
	swap(data[swapIndex], data[right]);
	
	return swapIndex;
} // !Partition

//------------------------------------------------------------------------------
//QuickSort: Sorts the given array by splitting it into two subarrays where the
//	left subarray contains all values smaller than the pivot element and the
//	right subarray contains all values greater than the pivot element.
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
	int pivot;
	
	//Determine whether the first element's value is less than the last
	//element's value
	if (left < right)
	{
		//Calculate the middle element 	of the array to be the pivot
		pivot = Partition(data, left, right);
		
		//Sort the left subarray
		QuickSort(data, left, (pivot - 1));
		
		//Sort the right subarray
		QuickSort(data, (pivot + 1), right);
	} // !if
} // !QuickSort

#endif // !QuickSort_h
