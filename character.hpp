/**
 * @file character.hpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Declares the Character structure representing a game character.
 */

#pragma once
#include <string>
#include <iostream>

 /**
  * @brief Represents a character inside the visual novel.
  */
struct Character {
    std::string name;
    std::string role;

    /**
     * @brief Default constructor.
     */
    Character() = default;

    /**
     * @brief Parameter constructor.
     * @param n Character name.
     * @param r Character role.
     */
    Character(const std::string& n, const std::string& r);

    /**
     * @brief Prints character information to the console.
     */
    void Print() const;
};
