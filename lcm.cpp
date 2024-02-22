#include <iostream>
using namespace std;

int lcm(int a, int b){
    int max = a > b ? a : b;
    for (int i = max; i <= (a*b); i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            return i;
            break;
        }
        
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}