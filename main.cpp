#include "novel_engine.hpp"
#include <iostream>

int main() {
    // Folosirea bibliotecii noastre
    NovelEngine engine;
    engine.Init("Player");
    
    // Demonstrație utilizare funcționalitate cu bibliotecă externă
    engine.SaveGame("savegame.json");
    
    engine.Run();
    
    std::cout << "Visual Novel completed!\n";
    return 0;
}

