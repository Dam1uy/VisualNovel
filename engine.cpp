#include "Engine.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Character.hpp"
#include "Scene.hpp"


Engine::Engine() {
    isRunning = false;
    currentSceneId = 0;
}


void Engine::Init(const std::string& name) {
    playerName = name;
    isRunning = true;
    currentSceneId = 0; 

    std::cout << "New game for " << playerName << "\n";
}


void Engine::SaveGame() {
    
}


bool Engine::LoadGame() {
    
    return false;
}


void Engine::Update() {
    std::cout << "Update called. Current scene: " << currentSceneId << "\n";
}


void Engine::Loop() {
    while (isRunning) {
        Update();
        isRunning = false; 
    }
    std::cout << "Game over.\n";
}

