#include <iostream>
#include <cmath>
using namespace std;

void binToDec(int bNumber) {
    int counter = 0;
    int result = 0;
    while (bNumber)
    {
        int lastDigit = bNumber % 10;
        if (lastDigit == 1)
        {
            result += lastDigit*pow(2, counter);
        }
        counter++;
        bNumber /= 10;
    }
    cout << "decimal representation: " << result << endl;
}

int main() {
    int input;
    cin >> input;
    binToDec(input);
    return 0;
}