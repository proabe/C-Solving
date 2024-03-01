#include <iostream>
#include <string>
using namespace std;

string reverseSentence(string S, char separator) 
{
    string separatorAsString(1, separator);
    S = S+separatorAsString;
    int from=0;
    int to=0;
    string result = "";
    for(int i=0; i< S.length(); i++){
        if(S[i] == '.') {
            to=i;
            result = (i==S.length()-1?"":separatorAsString) + S.substr(from, (to-from)) + result;
            from = i + 1;
        }
    }
    return result;
}

int main () {
    string input;
    char separator;
    cout << "Enter a string such as: \"i.like.this.program.very.much\" where \".\" is the separator";
    cin >> input;
    cout << "Enter separator";
    cin >> separator;
    cout << reverseSentence(input, separator) << endl;
    return 0;
}