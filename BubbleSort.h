#ifndef BubbleSort_h
#define BubbleSort_h

#include "Main.h"
#include "HelperFunctions.h"

//------------------------------------------------------------------------------
//BubbleSort: Iterates through every element in the array, comparing two
//	consecutive elements at a time and swapping them if the first element
//	is larger than the second.
//	Every pass through the array, the last element of the previous pass is
//	ignored because it will have been "bubbled" up to its correct location.
//	Sorts in ascending order.
//--------------------------------------
//	data:
//		Array containing the data to sort, of the same data type as "type".
//	length:
//		Length of the "data" array.
//------------------------------------------------------------------------------
template <typename type>
void BubbleSort(type data[], int length, int& count)
{
	type temp;

	//We will make a pass through the array for every value in the array
	for (int pass = 0; pass < length; pass++)
	{
		//For each element from the beginning of the array to the end of the
		//current sort range
		for (int elem = 1; elem < (length - pass); elem++)
		{
			//Determine whether the current element is larger than the
			//next element

			if (data[elem - 1] > data[elem])
			{
				//Save the current element
				temp = data[elem - 1];

				//Save the next and smaller element into the current
				//array position
				data[elem - 1] = data[elem];

				//Save the first and larger element into the next array position
				data[elem] = temp;
			} // !if
			count++;
		} // !for
	} // !for
} // !BubbleSort

#endif // !BubbleSort_h