//
// Created by varev on 7/30/24.
//

#include "../include/Art.h"

Art::Art() : source(""), dimensions(Dimensions().set(0,0)) {
    this->chunks = new Chunk *[1];
}

Art::Art(uint32_t width, uint32_t height) {
}

Art::Art(std::filesystem::path path, uint16_t width, uint16_t height) : source(path), dimensions(.set(0,0))  {

}

Art::~Art() = default;

void Art::process() {
}

void Art::printArt() {
    for (uint32_t i = 0; i < dimensions.height; i++) {
        for (uint32_t j = 0; j < dimensions.width; j++) {
            std::cout << chunks[i][j];
        }
        std::cout << std::endl;
    }
}

void Art::saveArt(std::filesystem::path path) {
}

void Art::setImage(std::filesystem::path path) {
}

void Art::setSize(const uint16_t width, const uint16_t height) {
    this->dimensions.width = width;
    this->dimensions.height = height;
}

void Art::setChunk(const Chunk& data, const uint16_t x, const uint16_t y) {
    this->chunks[y][x] = data;
}

std::filesystem::path Art::getImage() {
}

Dimensions Art::getSize() {
    return dimensions;
}
