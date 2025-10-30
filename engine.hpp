#pragma once
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include "character.hpp"
#include "Scene.hpp"

class Engine {
public:
    bool isRunning;
    int currentSceneId;
    std::string playerName;

    std::vector<std::shared_ptr<Character>> characters;
    std::vector<std::shared_ptr<Scene>> scenes;

    Engine();

    void Init(const std::string& name);
    void Update();
    void Loop();
};


