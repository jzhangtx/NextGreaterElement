NextGreaterElement: NextGreaterElement.o
	g++ -g -o NextGreaterElement.exe NextGreaterElement.o -pthread    

NextGreaterElement.o: NextGreaterElement/NextGreaterElement.cpp
	g++ -g  -c -pthread NextGreaterElement/NextGreaterElement.cpp
