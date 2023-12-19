#include "rtweekend.h"

#include "camera.h"
#include "color.h"
#include "hittable_list.h"
#include "sphere.h"

int main() {
    hittable_list world;

    auto material_1 = make_shared<lambertian>(color(1.0, 0.5, 0.5));
    auto material_2 = make_shared<lambertian>(color(0.5, 0.5, 1.0));
    auto material_3 = make_shared<lambertian>(color(0.7, 0.2, 1.0));

    world.add(make_shared<sphere>(point3( -2, 0, -5), 1.0, material_1));
    world.add(make_shared<sphere>(point3( 0.0,    0.0, -5),   1.5, material_2));
    world.add(make_shared<sphere>(point3( 2,    0.0, -5),   1.0, material_3));


    camera cam;

    // Ponto de vista 1
    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 100;
    cam.max_depth = 50;
    cam.vfov = 90;
    cam.lookfrom = point3(-2, 2, 1);
    cam.lookat = point3(0, 0, -1);
    cam.vup = vec3(0, 1, 0);
    Image image1(cam.image_width, static_cast<int>(cam.image_width / cam.aspect_ratio));
    cam.render(world, image1);
    image1.writeImage("output1.png");

    // Ponto de vista 2
    cam.lookfrom = point3(0, 2, 2);  // Altere a posição da câmera
    cam.lookat = point3(0, 0, -1);    // Altere o ponto para onde a câmera está olhando
    Image image2(cam.image_width, static_cast<int>(cam.image_width / cam.aspect_ratio));
    cam.render(world, image2);
    image2.writeImage("output2.png");

    return 0;

}