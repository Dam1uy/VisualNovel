#pragma once
#include <string>

struct Character {
    std::string name;
    std::string role;
    std::string description;
    std::string emotion;
    int relationshipLevel;
    bool isActive;
};

void print() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Role: " << role << "\n";
    std::cout << "Description: " << description << "\n";
    std::cout << "Emotion: " << emotion << "\n";
    std::cout << "Relationship Level: " << relationshipLevel << "\n";
	std::cout << "Active: " << (isActive ? "Yes" : "No") << "\n";
}

void updateEmotion(const std::string& newEmotion) {
    emotion = newEmotion;
}

void updateRelationship(int change ) {
	relationshipLevel += change;
    }
