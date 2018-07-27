#include <fstream>
#include <iostream>
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include "Bitmap.h"
using namespace mazeSpace;
using namespace std;

namespace mazeSpace{
	
	Bitmap::Bitmap(int width, int height): m_width(width),m_height(height), m_pPixel(new uint8_t[width*height*3]{}) {
				
	}

  Bitmap::~Bitmap()	{}
	void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
		 
	}

	bool Bitmap::write(string filename){
		cout << "Began writing file" << endl;
		BitmapFileHeader fileHeader;
		BitmapInfoHeader infoHeader;

		cout << "1" << endl;
		fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
		fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

		cout << "2" << endl;
		infoHeader.width = m_width;
		infoHeader.height = m_height;
		ofstream file;
		file.open(filename, ios::out | ios::binary);

		cout << "3" << endl;
		if(!file) {
			return false;
		}
		
		file.write((char *)&fileHeader, sizeof(fileHeader));
		file.write((char *)&infoHeader, sizeof(infoHeader));
		file.write((char *)m_pPixel.get(), m_width * m_height * 3);

		cout << "4" << endl;

		file.close();
		return true;
	}
}
