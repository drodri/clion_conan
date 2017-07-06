cmake_minimum_required(VERSION 2.8)
project(BoostPoco)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(demo demo.cpp)
target_link_libraries(demo ${CONAN_LIBS})
