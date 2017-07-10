cmake_minimum_required(VERSION 2.8)
project(MySocialNetwork)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
#set(CONAN_INCLUDE_DIRS "C:/Users/drodri/clion/chat/cmake-build-debug/mypkg/include"
#        "C:/Users/drodri/.conan/data/Hello/0.1/diego/testing/package/6b55d5c343431d0fc9867f3c67b46c30d20d2cad/include")
#set(CONAN_LIB_DIRS "C:/Users/drodri/clion/chat/cmake-build-debug/mypkg/lib"
#        "C:/Users/drodri/.conan/data/Hello/0.1/diego/testing/package/6b55d5c343431d0fc9867f3c67b46c30d20d2cad/lib")
set(CONAN_INCLUDE_DIRS_CHAT "C:/Users/drodri/clion/chat/cmake-build-debug/mypkg/include")
set(CONAN_LIB_DIRS_CHAT "C:/Users/drodri/clion/chat/cmake-build-debug/mypkg/lib")

conan_basic_setup(TARGETS)

add_executable(social social.cpp)
target_link_libraries(social CONAN_PKG::Chat)
