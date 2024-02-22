#include <iostream>
using namespace std;

int smallestDivisior(int number) {
    
    for(int i=2; i < number; i++){
        if (number % i == 0)
        {
            return i;
            break;
        }
        
    }
    return number;
}

int main() {
    int input;
    cin >> input;

    cout << smallestDivisior(input) << endl;
    return 0;
}