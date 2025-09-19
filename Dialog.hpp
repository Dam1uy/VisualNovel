#pragma once
#include <string>
#include <vector>

struct Dialog {
    int dialogId;
    std::string speaker;
    std::string text;
    std::string emotion;
    bool isImportant;

    std::vector<int> nextDialogIds; 
};
