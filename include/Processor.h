//
// Created by varev on 7/28/24.
//

#ifndef IMAGE_H
#define IMAGE_H

#include <opencv4/opencv2/opencv.hpp>

#include "Chunk.h"

enum Type {
    DARK_MODE,
    LIGHT_MODE
};

class Processor {
protected:
    Type mode;

public:
    Processor();
    explicit Processor(Type mode);
    ~Processor();

    // Utils
    Chunk processChunk(cv::Mat image, uint16_t x, uint16_t y);
};

#endif //IMAGE_H
