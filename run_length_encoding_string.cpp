#include <iostream>

using namespace std;

string encode(const string &s) {
    char currentChar = s[0];
    int currentCharOccurence = 0;
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == currentChar) {
            currentCharOccurence++;
        } else {
            result += currentChar+to_string(currentCharOccurence);
            currentChar = s[i];
            currentCharOccurence=1;
        }
        if (i == s.length()-1) {
            if(s[i] != currentChar) {
                currentChar = s[i];
                currentCharOccurence=1;
            }
            result += currentChar+to_string(currentCharOccurence);
        }
    }
    return result;
}

int main () {
    string input;
    cout << "Enter a string with consecutive characters, like: \"wwfffghhsssssttyiii\"" << endl;
    cin >> input;
    cout << encode(input) << endl;
    return 0;
}