#pragma once
#include <string>
#include <vector>
#include <memory>
#include "character.hpp"
#include "dialog.hpp"

class NovelEngine {
private:
    bool isRunning;
    std::string playerName;
    std::vector<std::shared_ptr<Character>> characters;

public:
    NovelEngine();
    void Init(const std::string& name);
    void Update();
    void Run();

    // Metodă care folosește biblioteca externă
    void SaveGame(const std::string& filename);
};


