//
// Created by varev on 7/29/24.
//

#ifndef CHUNK_H
#define CHUNK_H

#include <cinttypes>
#include <ostream>

#include "Dimensions.h"

#define CHUNK_DEFAULT_FILL ' '

class Chunk {
protected:
    char fill;
    Dimensions dimensions;

public:
    Chunk(uint32_t width, uint32_t height);
    ~Chunk();

    // Setters
    void setFill(char fill);

    // Getters
    [[nodiscard]] char getFill() const;
    [[nodiscard]] uint32_t getWidth() const;
    [[nodiscard]] uint32_t getHeight() const;

    friend std::ostream& operator<<(std::ostream& os, const Chunk& chunk);
};

#endif //CHUNK_H
