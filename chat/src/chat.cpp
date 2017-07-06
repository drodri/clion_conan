#include <iostream>
#include "chat.h"
#include "hello.h"

void chat(){
    #ifdef NDEBUG
    std::cout << "Chat Release!" <<std::endl;;
    #else
    std::cout << "Chat Debug!" <<std::endl;
    #endif
    hello();
}
