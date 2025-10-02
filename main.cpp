#include "Engine.hpp"
#include <iostream>

int main() {
    Engine engine;
    engine.Init("Player1");  
    engine.Loop();           
    return 0;
}
std::cout << "Press Enter to exit...";
std::cin.ignore();
std::cin.get();

