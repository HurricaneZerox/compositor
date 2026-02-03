#include <iostream>
#include "drm.h" 

int main() {
    int device = drm::open_graphics_device();
    drm::add_framebuffer(device, 3440, 1440, 24);

}
