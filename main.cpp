#include "engine.hpp"
#include "character.hpp"
#include <iostream>

int main() {
    NovelLib::GameEngine engine;
    engine.Initialize("TestUser");
    engine.SaveProgress();

    Character c("Alex", "Protagonist", "Test character");
    c.Render();

    std::cout << "--- Demonstration complete ---\n";
    return 0;
}

