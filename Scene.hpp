/**
 * @file Scene.hpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Declares the Scene structure representing a visual novel scene.
 */

#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "Dialog.hpp"

 /**
  * @brief Abstract base class for renderable objects.
  */
struct Renderable {
    virtual void Render() const = 0;
    virtual ~Renderable() = default;
};

/**
 * @brief Represents a scene containing dialogs and transition data.
 */
struct Scene : public Renderable {
    int sceneId;
    std::string name;
    std::string description;
    std::string backgroundImage;
    std::string musicTrack;
    bool isLocked;
    std::vector<int> nextSceneIds;
    std::vector<std::shared_ptr<Dialog>> dialogs;

    Scene() = default;

    /**
     * @brief Constructs a scene with ID, name and description.
     */
    Scene(int id, const std::string& n, const std::string& desc);

    /**
     * @brief Copy constructor.
     */
    Scene(const Scene& other) = default;

    /**
     * @brief Assignment operator.
     */
    Scene& operator=(const Scene& other) = default;

    /**
     * @brief Equality check.
     */
    bool operator==(const Scene& other) const;

    /**
     * @brief Inequality check.
     */
    bool operator!=(const Scene& other) const;

    /**
     * @brief Writes scene information to a stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Scene& s);

    /**
     * @brief Reads scene information from a stream.
     */
    friend std::istream& operator>>(std::istream& is, Scene& s);

    /**
     * @brief Renders basic scene information.
     */
    void Render() const override;

    /**
     * @brief Sorts dialogs alphabetically by speaker name.
     */
    void SortDialogs();

    /**
     * @brief Displays full scene with dialogs.
     */
    void ShowScene() const;
};


