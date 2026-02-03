#pragma once

#include <stdexcept>
#include <stdio.h>
#include <fcntl.h>
#include <xf86drm.h>
#include <xf86drmMode.h>

namespace drm {

    inline int open_graphics_device() {
        const char* device_path = "/dev/dri/card1";
        int fd = open(device_path, O_RDWR);

        if (fd < 0) {
            throw std::runtime_error("Failed to open graphics device");
        }

        return fd;
    }

    inline void add_framebuffer(int device, int width, int height, int bitdepth) {
        drmModeAddFB(device, width, height, 24, 32, width * 4, 0, 0);
    } 
    

}
