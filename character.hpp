#pragma once
#include <string>
#include <iostream>
#include "renderable.hpp"

struct Character : public Renderable {
    std::string name;
    std::string role;
    std::string description;

    Character();
    Character(const std::string& n, const std::string& r, const std::string& d);
    Character(const Character& other);
    Character& operator=(const Character& other);

    bool operator==(const Character& other) const;
    bool operator!=(const Character& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Character& c);
    friend std::istream& operator>>(std::istream& is, Character& c);

    void Render() const override;
};
