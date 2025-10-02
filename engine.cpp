#include "engine.hpp"
#include <iostream>

void Engine::Init() {
    currentSceneId = 0;
    isRunning = true;
    playerName = "Player";
}

void Engine::Update() 
{
	
}

void Engine::Loop() {
    while (isRunning) {
        Update();
    }
}

void Engine::LoadScene(int sceneId) {
    currentSceneId = sceneId;
    std::cout << "Scene " << sceneId << " loaded." << std::endl;
}

void Engine::ShowDialog(const std::string& dialogText) {
    std::cout << dialogText << std::endl;
}   