#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "character.hpp"

struct Choice {
    int id;
    std::string text;
    int emotionDelta;
    int relationshipDelta;
};

struct Dialog : public Renderable {
    int dialogId;
    std::string speaker;
    std::string text;
    std::vector<Choice> choices;

    Dialog() = default;
    Dialog(int id, const std::string& sp, const std::string& t)
        : dialogId(id), speaker(sp), text(t) {}
    Dialog(const Dialog& other) = default;
    Dialog& operator=(const Dialog& other) = default;

    bool operator==(const Dialog& other) const {
        return dialogId == other.dialogId && speaker == other.speaker;
    }
    bool operator!=(const Dialog& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Dialog& d) {
        os << d.speaker << ": " << d.text;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Dialog& d) {
        is >> d.dialogId;
        is.ignore();
        std::getline(is, d.speaker);
        std::getline(is, d.text);
        return is;
    }

    void Render() const override { std::cout << *this << std::endl; }

    // STL algorithm: find_if for choices
    const Choice* FindChoice(int choiceId) const {
        auto it = std::find_if(choices.begin(), choices.end(),
            [choiceId](const Choice& c) { return c.id == choiceId; });
        return it != choices.end() ? &(*it) : nullptr;
    }
};

