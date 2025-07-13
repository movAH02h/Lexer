#include "lexer.h"

class Lexer {
public:
    Lexer(const std::string& expression) : expr(expression) {}
    const std::string& getExpression() const { return expr; }
    void setExpression(const std::string& expression) { expr = expression; }

    void lexerJob() {
        
    }
private:
    std::string expr;
};
