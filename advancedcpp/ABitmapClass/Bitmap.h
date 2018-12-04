#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <cstdint>
using namespace std;

namespace harryprogramming {

class Bitmap {
private:
    int m_width{0};
    int m_height{0};

public:
    Bitmap(int width, int height);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    bool write(string filename);
    virtual ~Bitmap();

};

} /* namespace harryprogramming */

#endif // BITMAP_H
