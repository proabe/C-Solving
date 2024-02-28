#include <iostream>
using namespace std;

void reverse_dig(int &a){
    int reverseA = 0;
    while (a>0)
    {
        reverseA = reverseA * 10 + a % 10;
        a /= 10;
    }
    a = reverseA;
    cout << a << endl;
}

int main() {
    int a;
    cout << "Enter a numbers";
    cin >> a;
    reverse_dig(a);
    return 0;
}