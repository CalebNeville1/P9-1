//P9-1.cpp - Caleb Neville - October 22, 2026
//Count the amount of characters in a string
#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void) {

    string input;

    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        cout << "Vowel count: " << countVowel(input) << endl;
    }

    return 0;
}


int countVowel(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 'i' || c == 'I' || c == 'u' || c == 'U') {
            count++;
        }
    }
    return count;
}