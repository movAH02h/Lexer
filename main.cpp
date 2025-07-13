#include <iostream>
#include "lexer.h"
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::string expression;
    std::cin >> expression;

    const std::vector<std::pair<std::string, std::string>> final_representaion;
    final_representaion = lexer(expression);
    return 0;
}