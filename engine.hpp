#pragma once
#include <iostream>
#include <string>

class Engine {
public:
    int currentSceneId;
    bool isRunning;
    std::string playerName;

    void Init();
    void Update();
    void Loop();
    void LoadScene(int sceneId);
    void ShowDialog(const std::string& dialogText);
};