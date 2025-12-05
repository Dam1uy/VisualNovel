#include "../Scene.hpp"
#include <cassert>

int main() {
    Scene s(1, "Intro", "Opening");
    assert(s.sceneId == 1);
    assert(s.name == "Intro");

    return 0;
}
