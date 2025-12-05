#include "character.hpp"

Character::Character()
    : name(""), role(""), description("") {
}

Character::Character(const std::string& n, const std::string& r, const std::string& d)
    : name(n), role(r), description(d) {
}

Character::Character(const Character& other)
    : name(other.name), role(other.role), description(other.description) {
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
        role = other.role;
        description = other.description;
    }
    return *this;
}

bool Character::operator==(const Character& other) const {
    return name == other.name && role == other.role;
}

bool Character::operator!=(const Character& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Character& c) {
    os << c.name << " (" << c.role << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Character& c) {
    is >> c.name >> c.role;
    return is;
}

void Character::Render() const {
    std::cout << *this << std::endl;
}
