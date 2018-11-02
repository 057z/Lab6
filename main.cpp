#include <iostream>
#include "dictionary.hpp"
using namespace std;

int main() {
    dictionary dictionary1;
    cout << "1 - Print dictionary\n2 - Find word definition\n3 - Enter new word and definition\n4 - Exit";
    int choice;
    cin >> choice;
    while(choice!=4) {
        switch(choice) {
            case 1: {
                dictionary1.print();
                break;
            }
            case 2: {
                string word;
                cout<<"Word: ";
                cin>>word;
                cout<<dictionary1.findWord(word);
                break;
            }
            case 3: {
                string word;
                cout<<"Word: ";
                cin>>word;
                dictionary1.insert(word);
                break;
            }
            default: {
                break ;
            }
        }
        cout << "1 - Print dictionary\n2 - Find word definition\n3 - Enter new word and definition\n4 - Exit" << endl;
        cin >> choice;
    }
    cout << "Closing program!" << endl;
    return 0;
}