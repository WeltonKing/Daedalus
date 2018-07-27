#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace mazeSpace;
int main(){
	int i;
	Bitmap bitmap(800,600);
	bitmap.write("rect.bmp");
	cout << "Done!" << endl;
}

