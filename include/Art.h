//
// Created by varev on 7/30/24.
//

#ifndef ART_H
#define ART_H

#include <opencv4/opencv2/opencv.hpp>
#include <filesystem>

#include "Processor.h"
#include "Chunk.h"

class Art {
private:
    std::filesystem::path source;

protected:
    cv::Mat image;
    Chunk** chunks;
    Dimensions dimensions;

public:
    Art();
    Art(uint32_t width, uint32_t height);
    Art(std::filesystem::path path, uint16_t width, uint16_t height);
    ~Art();

    // Utils
    void process();
    void printArt();
    void saveArt(std::filesystem::path path);

    // Setters
    void setImage(std::filesystem::path path);
    void setSize(uint16_t width, uint16_t height);
    void setChunk(const Chunk& data, uint16_t x, uint16_t y);

    // Getters
    std::filesystem::path getImage();
    Dimensions getSize();
};

#endif //ART_H
