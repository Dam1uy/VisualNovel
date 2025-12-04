#include <iostream>
#include "character.hpp"

int main() {
    Character a("Alex", "Hero", "Main protagonist");
    Character b = a;
    Character c;
    c = a;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";

    a.Render();

    if (a == b)
        std::cout << "Characters are equal.\n";

    return 0;
}
