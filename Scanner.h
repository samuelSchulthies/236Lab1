#pragma once
#include "Token.h"
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

class Scanner {

private:
    string input;
    vector<Token> tokenStorage;
public:
    Scanner(const string& input) : input(input) { }

    Token scanToken(string input) {

        int length = input.size();
        //cout << endl;
        //cout << input.size() << endl;
        for (int i = 0; i < length; i++){
            //cout << input[i] << endl;
            int c = input[i];
            int lineVal = 1;

            //Identifies the character and creates the appropriate token
            if (input[i] == ','){
                Token t = Token(COMMA, ",", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
                cout << &tokenStorage.at(i) << endl;
            }
            else if (input[i] == '.'){
                Token t = Token(PERIOD, ".", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[i] == '?'){
                Token t = Token(Q_MARK, "?", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[i] == '('){
                Token t = Token(LEFT_PAREN, "(", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[i] == ')'){
                Token t = Token(RIGHT_PAREN, ")", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[i] == ':'){
                Token t = Token(COLON, ":", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
//            else if (input[i] == ':-'){
//                Token t = Token(COLON_DASH, ":-", lineVal);
//                input.erase(0);
//            }
            else if (input[i] == '*'){
                Token t = Token(MULTIPLY, "*", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[i] == '+'){
                Token t = Token(ADD, "+", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
//            else if (input[i] == 'Schemes'){
//                Token t = Token(SCHEMES, "Schemes", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == 'Facts'){
//                Token t = Token(FACTS, "Facts", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == 'Rules'){
//                Token t = Token(RULES, "Rules", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == 'Queries'){
//                Token t = Token(QUERIES, "Queries", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == 'ID'){
//                Token t = Token(ID, "", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == ''){
//                Token t = Token(STRING, "", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == ''){
//                Token t = Token(COMMENT, "", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == ''){
//                Token t = Token(UNDEFINED, "", lineVal);
//                input.erase(0);
//            }
//            else if (input[i] == ''){
//                Token t = Token(EOF_TYPE, "", lineVal);
//                input.erase(0);
//            }
            else if (c == '\n'){
                lineVal += 1;
            }
        }
    }

};





