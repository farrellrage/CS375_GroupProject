all:	Main.cpp Main.h HelperFunctions.o RandomizedQuickSort.o
	g++ -g -Wall -o SortCompare Main.cpp HelperFunctions.o RandomizedQuickSort.o

HelperFunctions.o:	HelperFunctions.cpp HelperFunctions.h Main.h
	g++ -g -Wall -c HelperFunctions.cpp

RandomizedQuickSort.o:	RandomizedQuickSort.cpp RandomizedQuickSort.h Main.h
	g++ -g -Wall -c RandomizedQuickSort.cpp

clean:
	-rm *.o SortCompare