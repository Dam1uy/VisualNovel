#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "Dialog.hpp"

struct Renderable {
    virtual void Render() const = 0;
    virtual ~Renderable() = default;
};

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
        : sceneId(id), name(n), description(desc) {}
    Scene(const Scene& other) = default;
    Scene& operator=(const Scene& other) = default;

    bool operator==(const Scene& other) const {
        return sceneId == other.sceneId && name == other.name;
    }
    bool operator!=(const Scene& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Scene& s) {
        os << "Scene: " << s.name << "\n" << s.description << "\n";
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Scene& s) {
        is >> s.sceneId;
        is.ignore();
        std::getline(is, s.name);
        std::getline(is, s.description);
        return is;
    }

    void Render() const override { std::cout << *this << std::endl; }

    // STL algorithm: sort dialogs by speaker name
    void SortDialogs() {
        std::sort(dialogs.begin(), dialogs.end(),
            [](const std::shared_ptr<Dialog>& a, const std::shared_ptr<Dialog>& b) {
                return a->speaker < b->speaker;
            });
    }
};

