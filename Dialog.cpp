/**
 * @file Dialog.cpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Implements dialog behavior and lookup logic.
 */

#include "Dialog.hpp"
#include <iostream>

Dialog::Dialog(int id, const std::string& sp, const std::string& t)
    : dialogId(id), speaker(sp), text(t) {
}

bool Dialog::operator==(const Dialog& other) const {
    return dialogId == other.dialogId && speaker == other.speaker;
}

bool Dialog::operator!=(const Dialog& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Dialog& d) {
    os << d.speaker << ": " << d.text;
    return os;
}

std::istream& operator>>(std::istream& is, Dialog& d) {
    is >> d.dialogId;
    is.ignore();
    std::getline(is, d.speaker);
    std::getline(is, d.text);
    return is;
}

void Dialog::Render() const {
    std::cout << speaker << ": " << text << "\n";
}

const Choice* Dialog::FindChoice(int choiceId) const {
    auto it = std::find_if(choices.begin(), choices.end(),
        [choiceId](const Choice& c) { return c.id == choiceId; });

    return it != choices.end() ? &(*it) : nullptr;
}
