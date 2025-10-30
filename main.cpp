#include "engine.hpp"
#include <iostream>

int main() {
    Engine engine;
    engine.Init("Player1");
    engine.Loop();
    return 0;
}

