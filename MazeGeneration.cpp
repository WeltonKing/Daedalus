//==================================================================
//===.Setup......................................................===
//==================================================================

#include <iostream>
//#include "Bitmap.h"

using namespace std;
//using namespace mazeSpace;





//==================================================================
//===.Function Declarations......................................===
//==================================================================

char** makeMaze (int* size, int** positions);





//==================================================================
//===.Main.......................................................===
//==================================================================

int main()
{
	// start
	cout << "Welcome to Daedalus" << endl;


	// set maze variables
	int scale = 10;
	int* size = 0;
	int** positions = 0;
	size = new int[2] {80, 60};
	positions = new int*[2];
	positions[0] = new int[2] {0, 0};
	positions[1] = new int[2] {size[0] - 1, size[1] - 1};
	

	// make maze
	cout << "Building Maze..." << endl;
	char** maze = makeMaze(size, positions);
	cout << "Maze Complete" << endl;


	// convert to maze to bidtmap
	cout << "Started Bitmap Conversion..." << endl;
	//Bitmap bitmap(size[0] * scale, size[1] * scale);
	cout << "5" << endl;
	//bitmap.write("rect.bmp");
	cout << "Bitmap Complete" << endl;


	// end
	cout << "Done!" << endl;
}





//==================================================================
//===.Function Definitions.......................................===
//==================================================================

char** makeMaze (int* size, int** positions)
{
	// establish maze array
	char** maze = 0;
	maze = new char* [size[1]];

	// fill each row with columns
	for (int i = 0; i < size[1]; i++)
	{
		maze[i] = new char[size[0]];
	}

	return maze;
}
