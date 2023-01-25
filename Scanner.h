#pragma once
#include "Token.h"
#include <iostream>
#include <cctype>

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

        int length = input.length();
        for (int i = 0; i < length; i++){
            int c = input[i];

            //If the first character is a comma, create a COMMA token and erase the first character
            if (input[0] == ','){
                Token t = Token(COMMA, ",", 2);
                input.erase(0);
            }

            //If the first characters are white space, remove them until gone.
            //isalpha will break the loop once it stops encountering white space
            if (isspace(c)){
                input.erase(i);
            }
            if (isalpha(input[i])){
                break;
            }
        }

        return Token(type, value, line);
    }
};





