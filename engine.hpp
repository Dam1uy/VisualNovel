#pragma once
#include <string>

namespace NovelLib {

    class GameEngine {
    private:
        std::string playerName;

    public:
        void Initialize(const std::string& name);
        void SaveProgress(); // folosește biblioteca externă <fstream>
    };

}



