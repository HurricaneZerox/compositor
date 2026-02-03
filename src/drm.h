#pragma once

#include <stdexcept>
#include <stdio.h>
#include <fcntl.h>
#include <xf86drm.h>

namespace drm {

    inline int open_graphics_device() {
        const char* device_path = "/dev/dri/renderD128";
        int fd = open(device_path, O_RDWR);

        if (fd < 0) {
            throw std::runtime_error("Failed to open graphics device");
        }

        return fd;
    }

    
    

}
