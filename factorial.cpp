#include <iostream>
using namespace std;

long long int factorial(int number) {
    long long int factorialResult = 1;
    while (number > 1)
    {
        factorialResult *= number;
        number--;
    }
    return factorialResult;
}

int main() {
    int input;
    cin >> input;
    cout << factorial(input) << endl;
    return 0;
}