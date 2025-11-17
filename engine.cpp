#include "engine.hpp"
#include <iostream>

namespace NovelLib {
    void GameEngine::Initialize(const std::string& name) {
        playerName = name;
        std::cout << "=== Visual Novel ===\n";
        std::cout << "Jucator: " << playerName << "\n\n";
    }

    void GameEngine::ShowDialogue(const std::string& speaker, const std::string& text) {
        std::cout << speaker << ": " << text << "\n";
    }

    void GameEngine::SaveProgress() {
        // Folosim biblioteca externă <fstream> pentru salvare
        std::ofstream saveFile("novel_save.txt");
        saveFile << "Salvare joc visual novel\n";
        saveFile << "Jucator: " << playerName << "\n";
        saveFile << "Progres: Scene 1 complet\n";
        saveFile.close();

        std::cout << "\n[Progres salvat cu succes!]\n";
    }
}
