/**
 * @file engine.hpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Declares the Engine class responsible for game flow.
 */

#pragma once
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>
#include "character.hpp"

class Engine {
public:
    std::string player;
    std::vector<std::shared_ptr<Character>> characters;

    Engine() = default;

    /**
     * @brief Initializes the engine and loads basic characters.
     */
    void Init(const std::string& name);

    /**
     * @brief Performs a single update step.
     */
    void Update();
};






