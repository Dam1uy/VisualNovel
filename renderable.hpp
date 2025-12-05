#pragma once

struct Renderable {
    virtual void Render() const = 0;
    virtual ~Renderable() = default;
};

