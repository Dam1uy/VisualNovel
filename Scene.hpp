/**
 * @file Scene.hpp
 * @project Visual Novel Engine
 */

#pragma once
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include "Dialog.hpp"

struct Scene {
    int sceneId;
    std::string name;
    std::string description;
    std::vector<std::shared_ptr<Dialog>> dialogs;

    Scene();
    Scene(int id, const std::string& n, const std::string& d);
    Scene(const Scene& other);
    Scene& operator=(const Scene& other);

    bool operator==(const Scene& other) const;
    bool operator!=(const Scene& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Scene& s);
    friend std::istream& operator>>(std::istream& is, Scene& s);

    void Render() const;
    void SortDialogs();
};
