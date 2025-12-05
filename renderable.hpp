/**
 * @file renderable.hpp
 * @project Visual Novel Engine
 * @author Your Name
 * @date 2025
 *
 * @brief Declares the abstract Renderable base class used for visual output.
 */

#pragma once

 /**
  * @brief Abstract base class for all renderable game objects.
  */
struct Renderable {
    /**
     * @brief Renders the object to the output stream.
     */
    virtual void Render() const = 0;

    /**
     * @brief Virtual destructor for safe polymorphic destruction.
     */
    virtual ~Renderable() = default;
};


