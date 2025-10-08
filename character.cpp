#include "character.hpp"
#include <string>
#include <iostream>

Character::Character(const std::string& n, const std::string& r, const std::string& d)
	: name(n), role(r), description(d),
	emotionLevel(50), relationshipLevel(0),
	isActive(true) {
}

void Character::Print() const {
	std::cout << "Name: " << name
		<< " | Emotion: " << emotionLevel << "/100"
		<< " | Relationship: " << relationshipLevel << "/100"
		<< " | Active: " << (isActive ? "yes" : "no")
		<< std::endl;
}

void Character::ChangeEmotion(int delta) {
	emotionLevel += delta;
	if (emotionLevel > 100) emotionLevel = 100;
	if (emotionLevel < 0)   emotionLevel = 0;
}

void Character::Character::UpdateRelationship(int delta) {
	relationshipLevel += delta;
	if (relationshipLevel > 100) relationshipLevel = 100;
	if (relationshipLevel < 0)   relationshipLevel = 0;
}

std::string Character::GetEmotionText() const {
	if (emotionLevel <= 30) return "Sad";
	else if (emotionLevel <= 50) return "Neutral";
	else if (emotionLevel <= 70) return "Happy";
	else return "Excited";
}

std::string Character::GetRelationshipStage() const {
	if (relationshipLevel < 30) return "Enemies";
	else if (relationshipLevel < 50) return "Neutral";
	else if (relationshipLevel < 70) return "Friendship";
	else return "More than a friend";
}





