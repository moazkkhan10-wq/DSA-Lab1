#include <iostream>
#include <string>
using namespace std;
int findPattern(string text, string pattern);
int main()
 {
    string text = "hello world";
    // Test Case 1: Pattern at the beginning
    cout << "Pattern at beginning ('hello'): " << findPattern(text, "hello") << endl;
    // Test Case 2: Pattern at the end
    cout << "Pattern at end ('world'): " << findPattern(text, "world") << endl;
    // Test Case 3: Pattern not present
    cout << "Pattern not present ('abc'): " << findPattern(text, "abc") << endl;
    // Test Case 4: Empty pattern
    cout << "Empty pattern (''): " << findPattern(text, "") << endl;
    return 0;
}