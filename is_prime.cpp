#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    while (true) {
        if(isPrime(n)) {
            cout << n;
            break;
        } else {
            ++n;
        }
    }
    return 0;
}