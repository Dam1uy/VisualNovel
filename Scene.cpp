/**
 * @file Scene.cpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Implements the Scene structure.
 */

#include "Scene.hpp"
#include <iostream>

Scene::Scene(int id, const std::string& n, const std::string& desc)
    : sceneId(id), name(n), description(desc) {
}

bool Scene::operator==(const Scene& other) const {
    return sceneId == other.sceneId && name == other.name;
}

bool Scene::operator!=(const Scene& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Scene& s) {
    os << "Scene: " << s.name << "\n" << s.description << "\n";
    return os;
}

std::istream& operator>>(std::istream& is, Scene& s) {
    is >> s.sceneId;
    is.ignore();
    std::getline(is, s.name);
    std::getline(is, s.description);
    return is;
}

void Scene::Render() const {
    std::cout << *this << std::endl;
}

void Scene::SortDialogs() {
    std::sort(dialogs.begin(), dialogs.end(),
        [](const std::shared_ptr<Dialog>& a, const std::shared_ptr<Dialog>& b) {
            return a->speaker < b->speaker;
        });
}

void Scene::ShowScene() const {
    std::cout << "Scene: " << name << "\n";
    std::cout << description << "\n";

    for (const auto& d : dialogs) {
        if (!d) continue;
        std::cout << d->speaker << ": " << d->text << "\n";
    }
}
