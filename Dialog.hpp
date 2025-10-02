#pragma once
#include <string>
#include <vector>
#include "Character.hpp"

struct Choice {
    int id;
    std::string text;      
    int emotionDelta;      
    int relationshipDelta; 
};

struct Dialog {
    int dialogId;
    std::string speaker;
    std::string text;
    std::vector<Choice> choices;

    void ApplyChoice(Character& c, int choiceId) {
        for (const auto& ch : choices) {
            if (ch.id == choiceId) {
                c.ChangeEmotion(ch.emotionDelta);
                c.UpdateRelationship(ch.relationshipDelta);
            }
        }
    }
};
