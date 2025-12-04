#include "character.hpp"
#include <iostream>

Character::Character(const std::string& n, const std::string& r, const std::string& d)
    : name(n), role(r), description(d) {
}

void Character::Render() const {
    std::cout << "Character: " << name << " (" << role << ")\n";
}







