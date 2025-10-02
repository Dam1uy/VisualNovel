#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Character.hpp"
#include "Scene.hpp"

class Engine {
public:
    bool isRunning;
    int currentSceneId;
    std::string playerName;

    std::vector<Character> characters; // toate personajele
    std::vector<Scene> scenes;         // toate scenele

    Engine() : isRunning(false), currentSceneId(0) {}

    // Initializează jocul
    void Init(const std::string& name) {
        playerName = name;
        isRunning = true;
        currentSceneId = 0; // scena de start

        // Încearcă să încarce jocul salvat
        if (LoadGame()) {
            std::cout << "Continuăm jocul anterior...\n";
        }
        else {
            std::cout << "Joc nou pentru " << playerName << "\n";
        }
    }

    // Salvează starea jocului într-un fișier text
    void SaveGame() {
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

    // Încarcă jocul salvat (dacă există)
    bool LoadGame() {
        std::ifstream file("save.txt");
        if (!file) return false;

        file >> currentSceneId;
        file.ignore(); // sărim linia cu numele jucătorului
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

    // Rulează un update – afișează scena și dialogurile
    void Update() {
        if (currentSceneId < 0 || currentSceneId >= scenes.size()) {
            std::cout << "Nu exista scena curenta!\n";
            isRunning = false;
            return;
        }

        Scene& scene = scenes[currentSceneId];
        scene.ShowScene();

        // Pentru fiecare dialog, aplică alegerea jucătorului
        for (auto& dialog : scene.dialogs) {
            if (!dialog.choices.empty()) {
                int choice;
                std::cout << "Alege o optiune: ";
                std::cin >> choice;

                // aplică asupra primului personaj (poți extinde la mai multe)
                if (!characters.empty())
                    dialog.ApplyChoice(characters[0], choice);

                std::cout << "Starea personajului:\n";
                characters[0].Print();
            }
        }

        // Salvăm jocul automat după fiecare scenă
        SaveGame();

        // Mergem la următoarea scenă, dacă există
        if (!scene.nextSceneIds.empty()) {
            currentSceneId = scene.nextSceneIds[0]; // simplu, doar prima opțiune
        }
        else {
            isRunning = false; // joc terminat
        }
    }

    // Bucla principală a jocului
    void Loop() {
        while (isRunning) {
            Update();
        }
        std::cout << "Joc terminat.\n";
    }
};

