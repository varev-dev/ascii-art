//
// Created by varev on 7/28/24.
//

#ifndef IMAGE_H
#define IMAGE_H

#include <opencv4/opencv2/opencv.hpp>
#include <filesystem>

#include "Dimensions.h"

namespace fs = std::filesystem;

enum Type {
    DARK_MODE,
    LIGHT_MODE
};

class Processor {
protected:
    cv::Mat image;
    Type mode;
    Dimensions chunk_size;

public:
    Processor();
    Processor(fs::path path, Type mode);
    void setImage(fs::path image_path);
    void process(Type mode = LIGHT_MODE);
    void print();
    void save();
};

#endif //IMAGE_H
