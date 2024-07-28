cmake_minimum_required(VERSION 3.28)
project(ascii_art)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)

add_executable(ascii_art main.cpp
        include/Image.h
        src/Image.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})