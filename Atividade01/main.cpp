#include "Image.h"

int main() {
    // Imagem de degradê
    Image degrade(256, 256);
    for (int y = 0; y < 256; ++y) {
        for (int x = 0; x < 256; ++x) {
            degrade.setPixel(x, y, x, y, 128);
        }
    }
    degrade.writeImage("degrade.png");

    // Imagem de círculo
    Image circle(256, 256);
    for (int y = 0; y < 256; ++y) {
        for (int x = 0; x < 256; ++x) {
            int dx = x - 128;
            int dy = y - 128;
            if (dx * dx + dy * dy <= 64 * 64) {
                circle.setPixel(x, y, 255, 255, 255);
            } else {
                circle.setPixel(x, y, 0, 0, 0);
            }
        }
    }
    circle.writeImage("circle.png");

    // Imagem de quadrado
    Image square(256, 256);
    for (int y = 0; y < 256; ++y) {
        for (int x = 0; x < 256; ++x) {
            if (x >= 96 && x < 160 && y >= 96 && y < 160) {
                square.setPixel(x, y, 255, 255, 255);
            } else {
                square.setPixel(x, y, 0, 0, 0);
            }
        }
    }
    square.writeImage("square.png");

    return 0;
}