#include "Engine.hpp"
#include <iostream>

int main() {
    Engine engine;
    engine.Init("Player1");  // numele jucătorului
    engine.Loop();           // pornește bucla jocului
    return 0;
}
