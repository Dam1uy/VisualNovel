/**
 * @file Dialog.hpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Declares the Dialog structure and dialog choices.
 */

#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory>
#include "character.hpp"
#include "renderable.hpp"

 /**
  * @brief Represents a selectable choice in a dialog.
  */
struct Choice {
    int id;
    std::string text;
    int emotionDelta;
    int relationshipDelta;
};

/**
 * @brief Represents a dialog spoken by a character.
 */
struct Dialog : public Renderable {
    int dialogId;
    std::string speaker;
    std::string text;
    std::vector<Choice> choices;

    /**
     * @brief Default constructor.
     */
    Dialog() = default;

    /**
     * @brief Parameter constructor.
     */
    Dialog(int id, const std::string& sp, const std::string& t);

    /**
     * @brief Copy constructor.
     */
    Dialog(const Dialog& other) = default;

    /**
     * @brief Assignment operator.
     */
    Dialog& operator=(const Dialog& other) = default;

    /**
     * @brief Equality operator.
     */
    bool operator==(const Dialog& other) const;

    /**
     * @brief Inequality operator.
     */
    bool operator!=(const Dialog& other) const;

    /**
     * @brief Writes dialog to a stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Dialog& d);

    /**
     * @brief Reads dialog from a stream.
     */
    friend std::istream& operator>>(std::istream& is, Dialog& d);

    /**
     * @brief Renders the dialog text.
     */
    void Render() const override;

    /**
     * @brief Finds a choice by its ID.
     * @return Pointer to the choice or nullptr.
     */
    const Choice* FindChoice(int choiceId) const;
};
