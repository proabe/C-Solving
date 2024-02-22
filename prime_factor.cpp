#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

void primeFactorization(int number) {
    for (int i = 2; i <= number; i++)
    {
        if (isPrime(i))
        {
            while (number % i == 0)
            {
                cout << i << " ";
                number /= i;
            }
        }
    }
}

int main() {
    int input;
    cout << "Enter a number";
    cin >> input;
    primeFactorization(input);
    return 0;
}
