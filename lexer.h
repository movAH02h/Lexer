#pragma once
#include <string>

enum class TokenType {
    INT,
    FLOAT,
    PLUS,
    MINUS,
    DIVIDE,
    MULTIPLY,
    LPAREN,
    RPAREN,
    END
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string& expression);
    const std::string& getExpression() const;
    void setExpression(const std::string& expression);

    void lexerJob();
private:
    std::string expr;
};
