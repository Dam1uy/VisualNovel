#pragma once
#include <string>
#include <vector>

struct Scene {
    int sceneId;
    std::string name;
    std::string description;
    std::string backgroundImage;
    std::string musicTrack;
    bool isLocked;

    std::vector<int> nextSceneIds;
};