#include <iostream>
using namespace std;

int firstDigit(int input){
    while (input/10) {
        input /= 10;
    }
    return input;
}

int main() {
    int inputNumber;
    cout << "Enter a number";
    cin >> inputNumber;
    cout << firstDigit(inputNumber) << endl;
    return 0;
}