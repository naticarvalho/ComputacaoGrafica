#include "Image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

Image::Image(int width, int height)
    : width_(width), height_(height), pixels_(width * height * 3) {}

void Image::setPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
    int index = (y * width_ + x) * 3;
    pixels_[index] = r;
    pixels_[index + 1] = g;
    pixels_[index + 2] = b;
}

void Image::writeImage(const char* filename) {
    stbi_write_png(filename, width_, height_, 3, pixels_.data(), width_ * 3);
}