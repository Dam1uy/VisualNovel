#pragma once
#include <string>
#include <iostream>

struct Character {
    std::string name;
    std::string role;

    Character() = default;
    Character(const std::string& n, const std::string& r);

    void Print() const;
};
