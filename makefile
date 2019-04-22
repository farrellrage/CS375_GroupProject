all:	Main.cpp Main.h HelperFunctions.o BubbleSort.o InsertionSort.o MergeSort.o QuickSort.o RandomizedQuickSort.o
	g++ -g -Wall -o SortCompare Main.cpp HelperFunctions.o BubbleSort.o InsertionSort.o MergeSort.o QuickSort.o RandomizedQuickSort.o

HelperFunctions.o:	HelperFunctions.cpp HelperFunctions.h Main.h
	g++ -g -Wall -c Helperfunctions.cpp

BubbleSort.o:	BubbleSort.cpp BubbleSort.h Main.h
	g++ -g -Wall -c BubbleSort.cpp

InsertionSort.o:	InsertionSort.cpp InsertionSort.h Main.h
	g++ -g -Wall -c InsertionSort.cpp

MergeSort.o:	MergeSort.cpp MergeSort.h Main.h
	g++ -g -Wall -c MergeSort.cpp

QuickSort.o:	QuickSort.cpp QuickSort.h Main.h
	g++ -g -Wall -c QuickSort.cpp

RandomizedQuickSort.o:	RandomizedQuickSort.cpp RandomizedQuickSort.h Main.h
	g++ -g -Wall -c RandomizedQuickSort.cpp

clean:
	-rm *.o SortCompare