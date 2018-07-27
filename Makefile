MazeMaker: MazeGeneration.o Bitmap.o
	g++ --std=c++11 MazeGeneration.o Bitmap.o -o MazeMaker

MazeGeneration.o: MazeGeneration.cpp
	g++ --std=c++11 -c MazeGeneration.cpp

Bitmap.o: Bitmap.cpp
	g++ --std=c++11 -c Bitmap.cpp

clean:
	rm *.o 
