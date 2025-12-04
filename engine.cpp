#include "engine.hpp"
#include <iostream>
#include <fstream>

namespace NovelLib {

    void GameEngine::Initialize(const std::string& name) {
        playerName = name;
        std::cout << "Engine initialized for user: " << playerName << "\n";
    }

    void GameEngine::SaveProgress() {
        std::ofstream file("save_demo.txt");
        if (!file) {
            std::cout << "Error: cannot open save file.\n";
            return;
        }

        file << "User: " << playerName << "\n";
        file << "Progress: Demo save\n";

        std::cout << "Progress saved using external library <fstream>.\n";
    }

}
