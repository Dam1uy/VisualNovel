#include "character.hpp"

// Constructor implicit
Character::Character()
    : name(""), role(""), description("") {
}

// Constructor cu parametri
Character::Character(const std::string& n, const std::string& r, const std::string& d)
    : name(n), role(r), description(d) {
}

// Constructor de copiere
Character::Character(const Character& other)
    : name(other.name), role(other.role), description(other.description) {
}

// Operator de atribuire
Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
        role = other.role;
        description = other.description;
    }
    return *this;
}

// Operator ==
bool Character::operator==(const Character& other) const {
    return name == other.name && role == other.role;
}

// Operator !=
bool Character::operator!=(const Character& other) const {
    return !(*this == other);
}

// Operator <<
std::ostream& operator<<(std::ostream& os, const Character& c) {
    os << c.name << " (" << c.role << ")";
    return os;
}

// Operator >>
std::istream& operator>>(std::istream& is, Character& c) {
    is >> c.name >> c.role;
    return is;
}

// Render
void Character::Render() const {
    std::cout << *this << "\n";
}
