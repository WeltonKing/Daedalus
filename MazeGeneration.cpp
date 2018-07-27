#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace mazeSpace;
int main(){
	cout << "Started" << endl;
	Bitmap bitmap(800,600);
	cout << "5" << endl;
	bitmap.write("rect.bmp");
	cout << "Done!" << endl;
}

