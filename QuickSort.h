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
	int pivot = data[(int)(floor((left + right) / 2))];
	
	//Index to maintain the space in the array to swap with any other element in
	//the array that is smaller than the pivot element
	int swapIndex = left;
	
	int lowIndex = left;
	int highIndex = ((int)(floor((left + right) / 2) + 1));
	
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
	
	swap(data[swapIndex], data[right]);
	
	return swapIndex;
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
		partition = Partition(data, left, right);
		
		QuickSort(data, left, partition - 1);
		QuickSort(data, partition + 1, right);
	} // !if
} // !QuickSort

#endif // !QuickSort_h