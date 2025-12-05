/**
 * @file character.cpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Implements Character methods.
 */

#include "character.hpp"
#include <iostream>

Character::Character(const std::string& n, const std::string& r)
    : name(n), role(r) {
}

void Character::Print() const {
    std::cout << name << " - " << role << "\n";
}
