#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "Image.h"

using color = vec3;

inline double linear_to_gamma(double linear_component)
{
    return sqrt(linear_component);
}

void write_color(Image& image, int i, int j, color pixel_color, int samples_per_pixel) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Divide the color by the number of samples.
    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    // Apply the linear to gamma transform.
    r = linear_to_gamma(r);
    g = linear_to_gamma(g);
    b = linear_to_gamma(b);

    // Write the translated [0,255] value of each color component.
    static const interval intensity(0.000, 0.999);
    auto ir = static_cast<unsigned char>(256 * intensity.clamp(r));
    auto ig = static_cast<unsigned char>(256 * intensity.clamp(g));
    auto ib = static_cast<unsigned char>(256 * intensity.clamp(b));

    // Set pixel in the Image
    image.setPixel(i, j, ir, ig, ib);
}

#endif