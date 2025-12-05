/**
 * @file Engine.hpp
 * @project Visual Novel Engine
 */

#pragma once
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include "character.hpp"

class Engine {
public:
    std::string player;
    std::vector<std::shared_ptr<Character>> characters;

    void Init(const std::string& name);
    void Update();
};




