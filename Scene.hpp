#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "Dialog.hpp"
#include "renderable.hpp"

struct Scene : public Renderable {
    int sceneId;
    std::string name;
    std::string description;
    std::string backgroundImage;
    std::string musicTrack;
    bool isLocked;
    std::vector<int> nextSceneIds;
    std::vector<std::shared_ptr<Dialog>> dialogs;

    Scene() = default;

    Scene(int id, const std::string& n, const std::string& desc)
        : sceneId(id), name(n), description(desc) {
    }

    void ShowScene() const;

    void Render() const override {
        std::cout << "Scene: " << name << "\n";
        std::cout << description << "\n";
    }

    void SortDialogs() {
        std::sort(dialogs.begin(), dialogs.end(),
            [](const std::shared_ptr<Dialog>& a, const std::shared_ptr<Dialog>& b) {
                return a->speaker < b->speaker;
            });
    }
};
