#include <iostream>
#include <string>
using namespace std;

bool isNumeric(char x) {
    return x >= 48 && x <= 57;
}

int findSum(string str) {
    // for example str = 1kdfajo23 | o/p= 24
    int result = 0;
    int index = 0;
    int counter = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isNumeric(str[i]))
        {
            index = i;
            while (isNumeric(str[i]))
            {
                counter++;
                i++;
            }
            result += stoi(str.substr(index, counter));
            counter = 0;
            index = 0;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter an alphanumeric string" << endl;
    cin >> str;
    cout << findSum(str) << endl;
    return 0;
}