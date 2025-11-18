#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush newline
    cout << "Enter a line (string):\n";
    string s;
    getline(cin, s);

    // length
    cout << "Length = " << s.length() << "\n";

    // reverse
    cout << "Reverse = ";
    for (int i=(int)s.length()-1;i>=0;i--) cout << s[i];
    cout << "\n";

    // copy to another string
    string copy = s;
    cout << "Copy = " << copy << "\n";

    // count words (simple split on spaces)
    int words = 0;
    bool inWord = false;
    for (char c: s){
        if (!isspace((unsigned char)c) && !inWord){
            inWord = true; words++;
        } else if (isspace((unsigned char)c)) inWord = false;
    }
    cout << "Word count = " << words << "\n";
    return 0;
}
