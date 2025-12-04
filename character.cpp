#include "character.hpp"

Character::Character(const std::string& n, const std::string& r)
    : name(n), role(r) {
}

void Character::Print() const {
    std::cout << name << " - " << role << "\n";
}
