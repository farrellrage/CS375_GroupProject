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
	int leftBound = ((middle - left) + 1);
	int rightBound = (right - middle);
	
	vector<type> leftArray;
	vector<type> rightArray;
	
	//Copy data into the left subarray
	for (leftIndex = 0; leftIndex < leftBound; leftIndex++)
	{
		leftArray.push_back(data[left + leftIndex]);
	} // !for
	
	//Copy data into the right subarray
	for (rightIndex = 0; rightIndex < rightBound; rightBound++)
	{
		rightArray.push_back(data[middle + rightIndex + 1]);
	} // !for
	
	//Reinitialize array indecies
	leftIndex = 0;
	rightIndex = 0;
	mergedIndex = left;
	
	//While both subarrays have values to add to the merged array
	while ((leftIndex < leftBound) && (rightIndex < rightBound))
	{
		//Determine whether the current value in the first subarray should go
		//before the current value in the second subarray
		if (leftArray[leftIndex] <= rightArray[rightIndex])
		{
			//Set the current value in the merged array as the current value
			//in the left subarray
			data[mergedIndex] = leftArray[leftIndex];
			
			//Increment the left subarray index
			leftIndex++;
		} // !if
		else
		{
			//Set the current value in the merged array as the current value
			//in the right subarray
			data[mergedIndex] = rightArray[rightIndex];
			
			//Increment the right subarray index
			rightIndex++;
		} // !else
		
		//Increment the merged array index
		mergedIndex++;
	} // !while
	
	
	//Copy any remaining values in the left subarray into the merged array
	while (leftIndex < leftBound)
	{
		//Copy the current value in the left subarray into the merged array
		data[mergedIndex] = leftArray[leftIndex];
		
		
		
		
	} // !while
	
	
	
	
	
	
	
	
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