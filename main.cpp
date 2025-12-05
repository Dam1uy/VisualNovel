#include <iostream>
#include "character.hpp"

int main() {
    Character a("Alex", "Hero", "Description");
    Character b = a;
    Character c;
    c = a;

    a.Render();
    b.Render();
    c.Render();

    if (a == b) {
        std::cout << "Equal\n";
    }

    return 0;
}
