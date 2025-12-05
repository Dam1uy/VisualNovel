#include <cassert>
#include "../Scene.hpp"
#include "../Dialog.hpp"

int main() {
    Scene s(1, "Start", "Beginning");
    assert(s.sceneId == 1);
    assert(s.name == "Start");
    return 0;
}

