project(MyHello CXX)
cmake_minimum_required(VERSION 2.8)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(chat chat.cpp)
target_link_libraries(chat ${CONAN_LIBS})
add_executable(mychat mychat.cpp)
target_link_libraries(mychat chat)

#install(TARGETS chat
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)
#
#install(FILES chat.h
#        DESTINATION include)
#
#add_custom_command(TARGET chat
#        POST_BUILD
#        COMMAND cmake
#        ARGS -P cmake_install.cmake )
