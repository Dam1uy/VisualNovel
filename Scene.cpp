#include "Scene.hpp"
#include <iostream>

void Scene::ShowScene() const {
    std::cout << "Scene: " << name << "\n";
    std::cout << description << "\n";

    for (const auto& dptr : dialogs) {
        if (!dptr) continue;
        const Dialog& d = *dptr;

        std::cout << d.speaker << ": " << d.text << "\n";

        for (const auto& ch : d.choices) {
            std::cout << "  " << ch.id << ". " << ch.text << "\n";
        }
    }
}