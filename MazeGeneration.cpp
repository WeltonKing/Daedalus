#include <iostream>
#include "Bitmap.h"
using namespace std;
using namespace mazeSpace;
int main(){
	Bitmap bitmap(80,60);
	bitmap.write("rect.bmp");
	cout << "Done!" << endl;
}

