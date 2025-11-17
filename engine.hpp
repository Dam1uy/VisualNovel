#pragma once
#include <string>
#include <fstream> // Biblioteca externă

namespace NovelLib {
    class GameEngine {
    private:
        std::string playerName;

    public:
        void Initialize(const std::string& name);
        void ShowDialogue(const std::string& speaker, const std::string& text);
        void SaveProgress(); // Folosește biblioteca externă
    };
}


