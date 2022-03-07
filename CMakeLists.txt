cmake_minimum_required(VERSION 3.21)
project(clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(clion main.cpp cmake-build-debug/Worker.cpp Worker.h Employee.cpp Employee.h Manager.h Manager.cpp Boss.h Boss.cpp WorkerManager.h WorkerManager.cpp)
