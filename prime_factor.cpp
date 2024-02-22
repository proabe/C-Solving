#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        
    }
    return true;
}
