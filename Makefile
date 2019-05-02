COMP = g++ -g -Wall
DEPS = HelperFunctions.h Main.h
HEADS = BubbleSort.h.gch InsertionSort.h.gch MergeSort.h.gch QuickSort.h.gch RandomizedQuickSort.o

all:	gen Main.cpp $(DEPS) HelperFunctions.o $(HEADS) 
	$(COMP) -o SortCompare Main.cpp HelperFunctions.o RandomizedQuickSort.o

HelperFunctions.o:	HelperFunctions.cpp $(DEPS)
	$(COMP) -c HelperFunctions.cpp
	
BubbleSort.h.gch:	BubbleSort.h $(DEPS)
	$(COMP) -c BubbleSort.h

InsertionSort.h.gch:	InsertionSort.h $(DEPS)
	$(COMP) -c InsertionSort.h

MergeSort.h.gch:	MergeSort.h $(DEPS)
	$(COMP) -c MergeSort.h
	
QuickSort.h.gch:	QuickSort.h $(DEPS)
	$(COMP) -c QuickSort.h

RandomizedQuickSort.o:	RandomizedQuickSort.cpp RandomizedQuickSort.h Main.h
	$(COMP) -c RandomizedQuickSort.cpp
	
gen:	RandomNumberGenerator.cpp
	$(COMP) -o NumGen RandomNumberGenerator.cpp
	./NumGen

clean:
	-rm SortCompare NumGen
	-rm *.o *.gch 
	-rm AllSameValue.txt Ascending.txt Descending.txt random.txt RandomWithRepeats.txt