#include "engine.hpp"

void Engine::Init(const std::string& name) {
    player = name;

    characters.push_back(std::make_shared<Character>("Alex", "Hero"));
    characters.push_back(std::make_shared<Character>("Mira", "Support"));

    std::sort(characters.begin(), characters.end(),
        [](auto& a, auto& b) { return a->name < b->name; });
}

void Engine::Update() {
    auto it = std::find_if(characters.begin(), characters.end(),
        [](auto& c) { return c->name == "Alex"; });

    if (it != characters.end()) {
        (*it)->Print();
    }
}
