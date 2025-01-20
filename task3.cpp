#include <iostream>
using namespace std;
int main() {
    string array;
    int vowelCount = 0;
    cout << "Enter a string: ";
    getline(cin, array);
    for (int i=0;i<array.length();i++) {
    	int c=array[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
    
    return 0;
}
