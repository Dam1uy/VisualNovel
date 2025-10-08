#include "Dialog.hpp"

void Dialog::ApplyChoice(Character& c, int choiceId) {
	for (const auto& ch : choices) {
		if (ch.id == choiceId) {
			c.ChangeEmotion(ch.emotionDelta);
			c.UpdateRelationship(ch.relationshipDelta);
		}
	}
}

