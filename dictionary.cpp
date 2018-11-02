//
// Created by Matt Chernenko on 2018-11-01.
//
#include "dictionary.hpp"


dictionary::dictionary() {
    fstream fstream1;
    string key, value;
    fstream1.open("..//dictionary.txt");
    while(fstream1>>key>>value) {
        dict.insert(pair<string,string>(key,value));
    }
    fstream1.close();
}

void dictionary::print() {
    map<string,string>::iterator iterator1;
    for(iterator1 = dict.begin(); iterator1 != dict.end(); ++iterator1) {
        cout << iterator1->first << " " << iterator1->second << endl;
    }
}

void dictionary::insert(string word) {
    if(dict.find(word) == dict.end()) {
        string definition;
        cout << "definition: ";
        cin >> definition;
        ofstream ofstream1;
        ofstream1.open("..//dictionary.txt", ios_base::app);
        dict.insert(pair<string, string>(word, definition));
        ofstream1 << word << "" << definition << endl;
        ofstream1.close();
        cout << "Word added~\n" << endl;
    } else {
        cout << "Word already exists, Try again: " << endl;
    }
}

string dictionary::findWord(string word) {
    if(dict.find(word) == dict.end()) {
        return "Word doesn't exist, Try again\n";
    } else {
        string definition = dict.find(word)->second;
        return definition + "\n";
    }
}

