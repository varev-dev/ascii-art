//
// Created by varev on 7/29/24.
//

#ifndef DIMENSIONS_H
#define DIMENSIONS_H

#include <cstdint>

typedef struct dims {
    uint32_t width;
    uint32_t height;
    static dims set(uint32_t width, uint32_t height);
} Dimensions;

#endif //DIMENSIONS_H
