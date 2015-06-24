all: mpoint

mpoint: point.o stackofpoint.o
	g++ -o mpoint mpoint.cpp point.o stackofpoint.o

point.o: point.cpp
	g++ -c point.cpp

stackofpoint.o: stackofpoint.cpp
	g++ -c stackofpoint.cpp

clean:
	rm -f *.o
	rm -f mpoint mpoint.exe
