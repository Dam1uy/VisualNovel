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

    std::vector<Character> characters; 
    std::vector<Scene> scenes;         

    Engine();

    
    void Init(const std::string& name);

    
    void SaveGame();

    
    bool LoadGame();

    
    void Update();

    
    void Loop();
};


