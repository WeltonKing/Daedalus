#include "Bitmap.h"
#include <fstream>
using namespace mazeSpace;
using namespace std;
namespace mazeSpace{
	
	Bitmap::Bitmap(int width, int height): m_width(width),m_height(height), m_pPixel(new uint8_t[width*height*3]{}) {
				
	}

  Bitmap::~Bitmap()	{}
	void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
		 
	}

	bool Bitmap::write(string filename){
		BitmapFileHeader fileHeader;
		BitmapInfoHeader infoHeader;

		fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
		fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

		infoHeader.width = m_width;
		infoHeader.height = m_height;
		ofstream file;
		file.open(filename, ios::out | ios::binary);

		if(!file) {
			return false;
		}
		
		file.write((char *)&fileHeader, sizeof(fileHeader));
		file.write((char *)&infoHeader, sizeof(fileHeader));
		file.write((char *)m_pPixel.get(), m_width * m_height * 3);


		file.close();
		if(!file){         //make sure file was written
			return false;
		}
		return true;
	}
}
