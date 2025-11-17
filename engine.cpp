#include "novel_engine.hpp"
#include <fstream>
#include <algorithm>

NovelEngine::NovelEngine() : isRunning(false) {}

void NovelEngine::Init(const std::string& name) {
    playerName = name;
    isRunning = true;

    // Inițializare personaje
    characters.push_back(std::make_shared<Character>("Maya", "Protagonist", "Main character"));
    characters.push_back(std::make_shared<Character>("Leo", "Friend", "Best friend"));

    std::cout << "Novel Engine initialized for: " << playerName << "\n";
}

void NovelEngine::Update() {
    std::cout << "Story progresses...\n";
    for (auto& character : characters) {
        character->Render();
    }
}

void NovelEngine::Run() {
    while (isRunning) {
        Update();
        isRunning = false; // Simplificat pentru demonstrație
    }
}

void NovelEngine::SaveGame(const std::string& filename) {
    // Folosire bibliotecă externă pentru serializare
    std::ofstream file(filename);
    file << "Saved Game for: " << playerName << "\n";
    file << "Characters: " << characters.size() << "\n";
    std::cout << "Game saved using external library!\n";
}

