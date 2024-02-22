#include <iostream>
using namespace std;

int gcd(int a, int b){
    int min = a > b ? b : a;
    int ans = 1;
    for(int i = 1; i <= min; i++) {
        if((a % i == 0) && (b % i == 0)){
            ans = i;
        }
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}