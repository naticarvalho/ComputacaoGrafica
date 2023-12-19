#ifndef IMAGE_H
#define IMAGE_H

#include <vector>

class Image {
public:
    Image(int width, int height);
    void setPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b);
    void writeImage(const char* filename);

private:
    int width_;
    int height_;
    std::vector<unsigned char> pixels_;
};

#endif