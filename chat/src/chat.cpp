#include <iostream>
#include "chat.h"
#include "hello.h"

void chat(){
    #ifdef NDEBUG
    std::cout << "Chat Release12asdasd3!" <<std::endl;;
    #else
    std::cout << "Chat Debug123!" <<std::endl;
    #endif
    hello();
}
