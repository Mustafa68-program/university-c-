#include <iostream>
#include <string>
#include <algorithm>  // For reverse function
using namespace std;

int main() {
    string input;
    
    // Get user input
    cout << "Enter a string: ";
    getline(cin, input);
    
    // Reverse the string
    reverse(input.begin(), input.end());
    
    // Output the result
    cout << "Reversed string: " << input << endl;
    
    return 0;
}
