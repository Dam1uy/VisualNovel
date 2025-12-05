/**
 * @file Dialog.hpp
 * @project Visual Novel Engine
 */

#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "character.hpp"

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

    Dialog();
    Dialog(int id, const std::string& sp, const std::string& t);
    Dialog(const Dialog& other);
    Dialog& operator=(const Dialog& other);

    bool operator==(const Dialog& other) const;
    bool operator!=(const Dialog& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Dialog& d);
    friend std::istream& operator>>(std::istream& is, Dialog& d);

    void Render() const;
    const Choice* FindChoice(int choiceId) const;
};


