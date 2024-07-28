#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("input.jpg");

    if (image.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    for (int y = 0; y < image.rows; y++) {
        for (int x = 0; x < image.cols; x++) {
            auto &pixel = image.at<cv::Vec3b>(y, x);
            pixel[0] = 255 - pixel[0]; // Blue
            pixel[1] = 255 - pixel[1]; // Green
            pixel[2] = 255 - pixel[2]; // Red
        }
    }

    cv::imwrite("output.jpg", image);

    return 0;
}