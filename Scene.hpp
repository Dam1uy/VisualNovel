#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Dialog.hpp"

struct Scene {
    int sceneId;
    std::string name;
    std::string description;
    std::string backgroundImage;
    std::string musicTrack;
    bool isLocked;

    std::vector<int> nextSceneIds;
    std::vector<Dialog> dialogs;

    void ShowScene() const;
};

