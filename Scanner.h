#pragma once
#include "Token.h"
#include <iostream>

using namespace std;

class Scanner {

private:
    string input;

public:
    Scanner(const string& input) : input(input) { }

    Token scanToken() {
        TokenType type = COMMA;
        string value = ",";
        int line = 4;
        return Token(type, value, line);
    }
};





