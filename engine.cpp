#include "Engine.hpp"
#include <fstream>
#include <iostream>

// Init
void Engine::Init(const std::string& name) {
    playerName = name;
    isRunning = true;
    currentSceneId = 0;

    if (LoadGame()) {
        std::cout << "Continuăm jocul anterior...\n";
    }
    else {
        std::cout << "Joc nou pentru " << playerName << "\n";
    }
}

// Save
void Engine::SaveGame() {
    std::ofstream file("save.txt");
    if (!file) return;

    file << currentSceneId << "\n";
    file << playerName << "\n";

    for (auto& c : characters) {
        file << c.name << " " << c.emotionLevel << " "
            << c.relationshipLevel << " " << c.isActive << "\n";
    }

    file.close();
    std::cout << "Joc salvat!\n";
}

// Load
bool Engine::LoadGame() {
    std::ifstream file("save.txt");
    if (!file) return false;

    file >> currentSceneId;
    file.ignore();
    std::getline(file, playerName);

    for (auto& c : characters) {
        std::string name;
        int emo, rel;
        bool active;
        file >> name >> emo >> rel >> active;
        c.name = name;
        c.emotionLevel = emo;
        c.relationshipLevel = rel;
        c.isActive = active;
    }

    file.close();
    return true;
}

// Update
void Engine::Update() {
    if (currentSceneId < 0 || currentSceneId >= scenes.size()) {
        std::cout << "Nu exista scena curenta!\n";
        isRunning = false;
        return;
    }

    Scene& scene = scenes[currentSceneId];
    scene.ShowScene();

    for (auto& dialog : scene.dialogs) {
        if (!dialog.choices.empty()) {
            int choice;
            std::cout << "Alege o optiune: ";
            std::cin >> choice;

            if (!characters.empty())
                dialog.ApplyChoice(characters[0], choice);

            std::cout << "Starea personajului:\n";
            characters[0].Print();
        }
    }

    SaveGame();

    if (!scene.nextSceneIds.empty()) {
        currentSceneId = scene.nextSceneIds[0];
    }
    else {
        isRunning = false;
    }
}

// Loop
void Engine::Loop() {
    while (isRunning) {
        Update();
    }
    std::cout << "Joc terminat.\n";
}
