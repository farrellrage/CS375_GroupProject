all:	Main.cpp Main.h HelperFunctions.o MergeSort.o QuickSort.o RandomizedQuickSort.o
	g++ -g -Wall -o SortCompare Main.cpp HelperFunctions.o BubbleSort.o InsertionSort.o MergeSort.o QuickSort.o RandomizedQuickSort.o

HelperFunctions.o:	HelperFunctions.cpp HelperFunctions.h Main.h
	g++ -g -Wall -c HelperFunctions.cpp

MergeSort.o:	MergeSort.cpp MergeSort.h Main.h
	g++ -g -Wall -c MergeSort.cpp

QuickSort.o:	QuickSort.cpp QuickSort.h Main.h
	g++ -g -Wall -c QuickSort.cpp

RandomizedQuickSort.o:	RandomizedQuickSort.cpp RandomizedQuickSort.h Main.h
	g++ -g -Wall -c RandomizedQuickSort.cpp

clean:
	-rm *.o SortCompare