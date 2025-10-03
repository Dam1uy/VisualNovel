#include <string>
#include <vector>
#include <iostream>
#include "Scene.hpp"


void Scene::ShowScene() const {
	std::cout << "Scene: " << name << "\n";
	std::cout << description << "\n";
	for (const auto& d : dialogs) {
		std::cout << d.speaker << ": " << d.text << "\n";
		for (const auto& ch : d.choices) {
			std::cout << "  " << ch.id << ". " << ch.text << "\n";
		}
	}
}


