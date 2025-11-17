#include "engine.hpp"
#include <iostream>

int main() {
    // Folosirea bibliotecii noastre
    NovelLib::GameEngine novel;

    novel.Initialize("Alexandru");

    // Scenă simplă de visual novel
    novel.ShowDialogue("Narrator", "Te trezesti intr-o camera misterioasa...");
    novel.ShowDialogue("Străin", "Cine esti? Ce faci aici?");
    novel.ShowDialogue("Tu", "Nu stiu... unde sunt?");

    // Salvare folosind biblioteca externă
    novel.SaveProgress();

    std::cout << "\n--- Sfarsit demo ---\n";
    return 0;
}

