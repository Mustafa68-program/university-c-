#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    for (char &c : input) {
        c = toupper(c);
}
    cout << "Uppercase string: " << input << endl;   
    return 0;
}
