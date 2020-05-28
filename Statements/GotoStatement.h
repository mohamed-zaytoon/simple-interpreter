//
// Created by Zayton on 5/28/2020.
//

#ifndef SIMPLE_INTERPRETER_GOTOSTATEMENT_H
#define SIMPLE_INTERPRETER_GOTOSTATEMENT_H

#include <string>
#include "Statement.h"
using namespace std;
class GotoStatement :public Statement {
private:
    string labelName;
    list<string> *fileData;
public:
    GotoStatement(string statement, unordered_map<string, Value> *variables);
    void execute();

};


#endif //SIMPLE_INTERPRETER_GOTOSTATEMENT_H