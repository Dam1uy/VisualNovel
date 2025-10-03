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
    Character(const std::string& n, const std::string& r, const std::string& d);

    void Print() const;

    void ChangeEmotion(int delta);

    void UpdateRelationship(int delta);

    std::string GetEmotionText() const;

    std::string GetRelationshipStage() const;
};




