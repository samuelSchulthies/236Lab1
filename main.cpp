#include <iostream>
#include "Token.h"
#include "Scanner.h"

using namespace std;

int main() {
//    Token t = Token(COMMA, ",", 2);
//    cout << t.typeName(COMMA) << endl;

    Scanner s = Scanner(",,");
    Token t = s.scanToken();
    cout << t.toString() << endl;
}

