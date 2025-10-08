#include "Engine.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Character.hpp"
#include "Scene.hpp"


Engine::Engine() : isRunning(false), currentSceneId(0) {}


void Engine::Init(const std::string& name) {
	playerName = name;
	isRunning = true;
	currentSceneId = 0; 

	if (LoadGame()) {
		std::cout << "Continuing previous game...\n";
	}
	else {
		std::cout << "New game for " << playerName << "\n";
	}
}


void Engine::SaveGame() {
	std::ofstream file("save.txt");
	if (!file) return;

	file << currentSceneId << "\n";
	file << playerName << "\n";

	for (auto& c : characters) {
		file << c.name << " " << c.emotionLevel << " "
			<< c.relationshipLevel << " " << c.isActive << "\n";
	}

	file.close();
	std::cout << "Game saved!\n";
}


bool Engine::LoadGame() {
	std::ifstream file("save.txt");
	if (!file) return false;

	file >> currentSceneId;
	file.ignore();
	std::getline(file, playerName);

	for (auto& c : characters) {
		std::string name;
		int emo, rel;
		bool active;
		file >> name >> emo >> rel >> active;
		c.name = name;
		c.emotionLevel = emo;
		c.relationshipLevel = rel;
		c.isActive = active;
	}

	file.close();
	return true;
}
void Engine::Update() {
	if (currentSceneId < 0 || currentSceneId >= (int)scenes.size()) {
		std::cout << "Current scene does not exist!\n";
		isRunning = false;
		return;
	}

	Scene& scene = scenes[currentSceneId];
	scene.ShowScene();

	for (auto& dialog : scene.dialogs) {
		if (!dialog.choices.empty()) {
			int choice;
			std::cout << "Choose an option: ";
			std::cin >> choice;

			if (!characters.empty())
				dialog.ApplyChoice(characters[0], choice);

			std::cout << "Character status:\n";
			characters[0].Print();
		}
	}

	SaveGame();

	if (!scene.nextSceneIds.empty()) {
		currentSceneId = scene.nextSceneIds[0];
	}
	else {
		isRunning = false;
	}
}

void Engine::Loop() {
	while (isRunning) {
		Update();
	}
	std::cout << "Game over.\n";
}

