#pragma once
#include "Dialog.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "character.hpp"

void Dialog::ApplyChoice(Character& c, int choiceId) {
    for (const auto& ch : choices) {
        if (ch.id == choiceId) {
            // Note: Trebuie să ai metodele ChangeEmotion și UpdateRelationship în Character
            c.ChangeEmotion(ch.emotionDelta);
            c.UpdateRelationship(ch.relationshipDelta);
        }
    }
}

