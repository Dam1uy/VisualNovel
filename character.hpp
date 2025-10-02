#pragma once
#include <string>
#include <iostream>

struct Character {
    std::string name;
    std::string role;
    std::string description;
    int emotionLevel;       // 0 - 100
    int relationshipLevel;  // 0 - 100
    bool isActive;

    // Constructor
    Character(const std::string& n, const std::string& r, const std::string& d)
        : name(n), role(r), description(d),
        emotionLevel(50), relationshipLevel(0),
        isActive(true) {
    }

    void Print() const {
        std::cout << "Name: " << name
            << " | Emotion: " << emotionLevel << "/100"
            << " | Relationship: " << relationshipLevel << "/100"
            << " | Active: " << (isActive ? "yes" : "no")
            << std::endl;
    }

    void ChangeEmotion(int delta) {
        emotionLevel += delta;
        if (emotionLevel > 100) emotionLevel = 100;
        if (emotionLevel < 0)   emotionLevel = 0;
    }

    void UpdateRelationship(int delta) {
        relationshipLevel += delta;
        if (relationshipLevel > 100) relationshipLevel = 100;
        if (relationshipLevel < 0)   relationshipLevel = 0;
    }

    std::string GetEmotionText() const {
        if (emotionLevel <= 30) return "Sad";
        else if (emotionLevel <= 50) return "Neutral";
        else if (emotionLevel <= 70) return "Happy";
        else return "Excited";
    }

    std::string GetRelationshipStage() const {
        if (relationshipLevel < 30) return "Enemies";
        else if (relationshipLevel < 50) return "Neutral";
        else if (relationshipLevel < 70) return "Friendship";
        else return "More than a friend";
    }
};




