//
// Created by Matt Chernenko on 2018-11-01.
//

#ifndef LAB6_DICTIONARY_HPP
#define LAB6_DICTIONARY_HPP

#include <map>
#include <iterator>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class dictionary {
private:
    map<string,string>dict;
public:
    dictionary();
    void print();
    void insert(string word);
    string findWord(string word);
};

#endif //LAB6_DICTIONARY_HPP
