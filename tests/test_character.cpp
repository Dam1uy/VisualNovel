#include <cassert>
#include "../character.hpp"

int main() {
    Character c("Alex", "Hero");
    assert(c.name == "Alex");
    assert(c.role == "Hero");
    return 0;
}

