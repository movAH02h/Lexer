#include <iostream>
#include "lexer.h"
#include <string>

int main(int argc, char* argv[]) {
    std::string expression;
    std::cin >> expression;

    lexer(expression);
    return 0;
}