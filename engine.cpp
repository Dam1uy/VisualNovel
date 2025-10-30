    #include "engine.hpp"
#include <iostream>
#include <algorithm>

Engine::Engine() : isRunning(false), currentSceneId(0) {}

void Engine::Init(const std::string& name) {
    playerName = name;
    isRunning = true;
    currentSceneId = 0;

    // Exemplu: adăugare personaje folosind smart pointers
    characters.push_back(std::make_shared<Character>("Alex", "Detective", "Main character"));
    characters.push_back(std::make_shared<Character>("Mira", "Friend", "Childhood friend"));

    // Sortare personaje după nume (algoritm STL)
    std::sort(characters.begin(), characters.end(),
        [](const std::shared_ptr<Character>& a, const std::shared_ptr<Character>& b) {
            return a->name < b->name;
        });
}

void Engine::Update() {
    std::cout << "Update called. Current scene: " << currentSceneId << "\n";
    // Exemplu: căutare personaj după nume (algoritm STL)
    auto it = std::find_if(characters.begin(), characters.end(),
        [](const std::shared_ptr<Character>& c) { return c->name == "Alex"; });
    if (it != characters.end()) {
        (*it)->Render();
    }
}

void Engine::Loop() {
    while (isRunning) {
        Update();
        isRunning = false;
    }
    std::cout << "Game over.\n";
}

