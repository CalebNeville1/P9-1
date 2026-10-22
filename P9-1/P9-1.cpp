//P9-1.cpp - Caleb Neville - October 22, 2026
//Count the amount of characters in a string
#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void) {

    cout << "AEIOUaeiou " << "= " << countVowel("AEIOUaeiou") << endl;
    cout << "This is a test for SHOUTING " << "= " << countVowel("This is a test for SHOUTING") << endl;
    cout << "qwertyuiopasdfghjklzxcvbnm " << "= " << countVowel("qwertyuiopasdfghjklzxcvbnm") << endl;
    cout << "shy myrrh " << "= " << countVowel("shy myrrh") << endl;


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