//
// Created by varev on 7/31/24.
//

#include "../include/Chunk.h"

Chunk::Chunk(const uint32_t width, const uint32_t height) : fill(CHUNK_DEFAULT_FILL), dimensions(Dimensions().set(width, height)) {
}

Chunk::~Chunk() = default;

void Chunk::setFill(const char fill) {
    this->fill = fill;
}

char Chunk::getFill() const {
    return this->fill;
}

uint32_t Chunk::getWidth() const {
    return dimensions.width;
}

uint32_t Chunk::getHeight() const {
    return dimensions.height;
}

std::ostream& operator<<(std::ostream& os, const Chunk& chunk) {
    os << chunk.getFill();
    return os;
}