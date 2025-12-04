#pragma once
#include <string>
#include "renderable.hpp"

struct Character : public Renderable {
    std::string name;
    std::string role;
    std::string description;

    Character() = default;
    Character(const std::string& n, const std::string& r, const std::string& d);

    void Render() const override;
};
