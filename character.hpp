    #pragma once
#include <string>
#include <iostream>

// Clasa de bază abstractă pentru redare
struct Renderable {
    virtual void Render() const = 0;
    virtual ~Renderable() = default;
};

struct Character : public Renderable {
    std::string name;
    std::string role;
    std::string description;
    int emotionLevel;
    int relationshipLevel;
    bool isActive;

    // Constructor implicit
    Character() = default;

    // Constructor cu parametri
    Character(const std::string& n, const std::string& r, const std::string& d)
        : name(n), role(r), description(d), emotionLevel(0), relationshipLevel(0), isActive(true) {}

    // Constructor de copiere
    Character(const Character& other) = default;

    // Operator de atribuire
    Character& operator=(const Character& other) = default;

    // Operator de comparare
    bool operator==(const Character& other) const {
        return name == other.name && role == other.role;
    }
    bool operator!=(const Character& other) const { return !(*this == other); }

    // Operator de ieșire
    friend std::ostream& operator<<(std::ostream& os, const Character& c) {
        os << c.name << " (" << c.role << ")";
        return os;
    }
    // Operator de intrare
    friend std::istream& operator>>(std::istream& is, Character& c) {
        is >> c.name >> c.role;
        return is;
    }

    // Metoda de redare
    void Render() const override { std::cout << *this << std::endl; }
};




