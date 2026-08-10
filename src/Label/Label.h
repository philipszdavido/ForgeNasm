//
// Created by Chidume Nnamdi on 10/08/2026.
//

#ifndef FORGENASM_LABEL_H
#define FORGENASM_LABEL_H
#include <string>
#include <utility>

using namespace std;

class Label {
    public:
    string name;
    Label(string name) : name(std::move(name)) {};
};


#endif //FORGENASM_LABEL_H
