#include "Token.h"
#include "Scanner.h"
#include <fstream>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string fileName = argv[1];
    string datalogInput;
    Scanner datalogString = Scanner(datalogInput);

    ifstream input(fileName);
    if(!input.is_open()) {
        cout << fileName << "not found or could not be opened" << endl;
        return 1;
    }
    while(!input.eof()){
        string datalogAdder;
        getline(input, datalogAdder);
        datalogInput += datalogAdder;
    }
    //removes the whitespace from the string
    for (unsigned int i = 0; i < datalogInput.size(); i++) {
        if (isspace(i)) {
            datalogInput.erase(i);
        }
    }
    //for (unsigned int i = 0; i < datalogInput.size(); i++) {
        Token t = datalogString.scanToken();
        cout << t.toString();
    //}
}



//    Token t = Token(COMMA, ",", 2);
//    cout << t.typeName(COMMA) << endl;

//Scanner s = Scanner(",,");
//Token t = s.scanToken();
//cout << t.toString() << endl;