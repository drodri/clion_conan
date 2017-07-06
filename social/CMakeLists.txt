cmake_minimum_required(VERSION 2.8)
project(MySocialNetwork)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(social social.cpp)
target_link_libraries(social ${CONAN_LIBS})
