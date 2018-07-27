#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_
#include <cstdint>
using namespace std;

#pragma pack(2)

namespace mazeSpace{
	struct BitmapInfoHeader{
		int32_t headerSize{40};				//size of the struct
		int32_t width;								//of bitmap
		int32_t height;								//of bitmap
		int16_t planes{1};
		int16_t bitsPerPixel{24};
		int32_t compression{0};
		int32_t dataSize{0};
		int32_t horizontalResoluton{2400};
		int32_t verticalResolution{2400};
		int32_t colors{0};
		int32_t importantColors{0};
	};
}

#endif
