//
// Created by varev on 7/29/24.
//

#ifndef CHUNK_H
#define CHUNK_H

#include <cinttypes>

#include "Dimensions.h"

class Chunk {
protected:
    char fill;
    Dimensions size;

public:
    Chunk(uint32_t width, uint32_t heigth);
    void calculateSize(uint32_t image_width, uint32_t image_heigth, uint32_t collumns, uint32_t rows);

    [[nodiscard]] uint32_t getWidth() const;
    [[nodiscard]] uint32_t getHeight() const;
};

#endif //CHUNK_H
