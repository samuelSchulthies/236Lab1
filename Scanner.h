#pragma once
#include "Token.h"
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

class Scanner {

private:
    string input;
public:
    Scanner(const string& input) : input(input) { }
    vector<Token> tokenStorage;

    Token scanToken(string input) {

        while(input.size() > 0){
            //cout << input.size() << endl;
            int lineVal = 1;

            if (input[0] == '\n'){
                lineVal += 1;
                input.erase(0);
            }

            else if (isspace(0)) {
                input.erase(0);
            }

            //Identifies the character and creates the appropriate token
            else if (input[0] == ','){
                Token t = Token(COMMA, ",", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
                cout << "COMMA ELSE IF" << endl;
            }
            else if (input[0] == '.'){
                Token t = Token(PERIOD, ".", lineVal);
                cout << input.size() << endl;
                input.erase(0);
                tokenStorage.push_back(t);
                cout << "PERIOD ELSE IF" << endl;
                cout << input.size() << endl;
            }
            else if (input[0] == '?'){
                Token t = Token(Q_MARK, "?", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[0] == '('){
                Token t = Token(LEFT_PAREN, "(", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[0] == ')'){
                Token t = Token(RIGHT_PAREN, ")", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[0] == ':'){
                Token t = Token(COLON, ":", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
//            else if (input[i] == ':-'){
//                Token t = Token(COLON_DASH, ":-", lineVal);
//                input.erase(i);
//            }
            else if (input[0] == '*'){
                Token t = Token(MULTIPLY, "*", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
            else if (input[0] == '+'){
                Token t = Token(ADD, "+", lineVal);
                input.erase(0);
                tokenStorage.push_back(t);
            }
//            else if (input[i] == 'Schemes'){
//                Token t = Token(SCHEMES, "Schemes", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == 'Facts'){
//                Token t = Token(FACTS, "Facts", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == 'Rules'){
//                Token t = Token(RULES, "Rules", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == 'Queries'){
//                Token t = Token(QUERIES, "Queries", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == 'ID'){
//                Token t = Token(ID, "", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == ''){
//                Token t = Token(STRING, "", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == ''){
//                Token t = Token(COMMENT, "", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == ''){
//                Token t = Token(UNDEFINED, "", lineVal);
//                input.erase(i);
//            }
//            else if (input[i] == ''){
//                Token t = Token(EOF_TYPE, "", lineVal);
//                input.erase(i);
//            }
        }
        //cout << "size: " << tokenStorage.size() << endl;
    }

};





