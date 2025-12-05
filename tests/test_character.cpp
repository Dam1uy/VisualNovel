#include "../character.hpp"
#include <cassert>

int main() {
    Character c("Alex", "Hero");
    assert(c.name == "Alex");
    assert(c.role == "Hero");

    Character copy = c;
    assert(copy == c);

    return 0;
}
