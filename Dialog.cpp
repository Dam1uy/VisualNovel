#include "Dialog.hpp"

void Dialog::ApplyChoice(Character& c, int choiceId) {
    auto it = std::find_if(choices.begin(), choices.end(),
        [choiceId](const Choice& ch) { return ch.id == choiceId; });

    if (it != choices.end()) {
        c.ChangeEmotion(it->emotionDelta);
        c.UpdateRelationship(it->relationshipDelta);
    }
}

