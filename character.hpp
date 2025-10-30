#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <algorithm>

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

    Character() = default;
    Character(const std::string& n, const std::string& r, const std::string& d)
        : name(n), role(r), description(d), emotionLevel(0), relationshipLevel(0), isActive(true) {}
    Character(const Character& other) = default;
    Character& operator=(const Character& other) = default;

    bool operator==(const Character& other) const {
        return name == other.name && role == other.role;
    }
    bool operator!=(const Character& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Character& c) {
        os << c.name << " (" << c.role << ")";
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Character& c) {
        is >> c.name >> c.role;
        return is;
    }

    void Render() const override { std::cout << *this << std::endl; }
};




