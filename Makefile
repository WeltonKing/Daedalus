MazeMaker: MazeGeneration.o Bitmap.o
	g++ MazeGeneration.o Bitmap.o -o MazeMaker

MazeGeneration.o: MazeGeneration.cpp
	g++ -c MazeGeneration.cpp

Bitmap.o: Bitmap.cpp
	g++ -c Bitmap.cpp

clean:
	rm *.o 
