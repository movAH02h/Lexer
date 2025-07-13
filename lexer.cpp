#include "lexer.h"

Lexer::Lexer(const std::string& expression) : expr(expression) {}
const std::string& Lexer::getExpression() const { return expr; }
void Lexer::setExpression(const std::string& expression) { expr = expression; }

void Lexer::lexerJob() {

}