#pragma once
#include <string>
#include <vector>

#include "Character.hpp"
#include "Scene.hpp"

class Engine {
public:
    bool isRunning;
    int currentSceneId;
    std::string playerName;

    std::vector<Character> characters; // all characters
    std::vector<Scene> scenes;         // all scenes

    Engine();

    // Initialize the game
    void Init(const std::string& name);

    // Save game state to file
    void SaveGame();

    // Load saved game (if exists)
    bool LoadGame();

    // Update – display scene and dialogs
    void Update();

    // Main game loop
    void Loop();
};


