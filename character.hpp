/**
 * @file Character.hpp
 * @project Visual Novel Engine
 * @author Denis
 */

#pragma once
#include <string>
#include <iostream>

struct Character {
    std::string name;
    std::string role;

    Character();
    Character(const std::string& n, const std::string& r);
    Character(const Character& other);
    Character& operator=(const Character& other);

    bool operator==(const Character& other) const;
    bool operator!=(const Character& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Character& c);
    friend std::istream& operator>>(std::istream& is, Character& c);

    void Print() const;
};


