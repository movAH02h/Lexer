#include <iostream>
#include "lexer.h"
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::string expression;
    std::cin >> expression;

    Lexer lexer(expression);

    lexer.lexerJob();
    return 0;
}