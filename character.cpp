#include "character.hpp"
#include <iostream>

Character::Character(const std::string& n, const std::string& r, const std::string& d)
    : name(n), role(r), description(d),
      emotionLevel(50), relationshipLevel(0),
      isActive(true) {
}

void Character::Print() const {
    std::cout << "Name: " << name << std::endl;
}

void Character::ChangeEmotion(int delta) {
    emotionLevel += delta;
}

void Character::UpdateRelationship(int delta) {
    relationshipLevel += delta;
}

std::string Character::GetEmotionText() const {
    return "Emotion";
}

std::string Character::GetRelationshipStage() const {
    return "Relationship";
}





