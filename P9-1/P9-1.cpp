//P9-1.cpp - Caleb Neville - October 22, 2026
//Count the amount of characters in a string
#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);

int main(void) {

    cout << "Hello, world! " << "= " << countCharacter("Hello, world!") << endl;
    cout << "a b c " << "= " << countCharacter("a b c") << endl;
    cout << """ " << "= " << countCharacter("") << endl;
    cout << "Pls work " << "= " << countCharacter("Pls work") << endl;


}


int countCharacter(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        count++;
    }
    return count;
}