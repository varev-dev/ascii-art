//
// Created by varev on 7/30/24.
//

#include "../include/Art.h"
#include <fstream>

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

void Art::saveArt(const std::filesystem::path& path) {
    std::ofstream save;

    if (std::filesystem::exists(path)) {
        std::cout << "Name conflict, file with specified name exists." << std::endl;
        return;
    }

    save.open(path);

    if (!save.is_open()) {
        std::cout << "Unable to open file " << path.filename() << std::endl;
        return;
    }

    for (uint32_t y = 0; y < dimensions.height; y++) {
        for (uint32_t x = 0; x < dimensions.width; x++) {
            save << chunks[y][x];
        }
        save << std::endl;
    }

    save.close();
}

void Art::setImage(const std::filesystem::path& path) {
    const cv::Mat copy = this->image;
    this->image = cv::imread(path);

    if (this->image.empty()) {
        std::cout << "No image found in location: " << path.c_str() << std::endl;
        this->image = copy;
        return;
    }

    this->source = path;
}

void Art::setSize(const uint16_t width, const uint16_t height) {
    this->dimensions.width = width;
    this->dimensions.height = height;
}

void Art::setChunk(const Chunk& data, const uint16_t x, const uint16_t y) {
    this->chunks[y][x] = data;
}

std::filesystem::path Art::getImage() const {
    return this->source;
}

Dimensions Art::getSize() const {
    return dimensions;
}
