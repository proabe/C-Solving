#include <iostream>
using namespace std;

int fibonacci(int n)
    {
        if (n < 2)
        {
            return n;
        }
        
        int a = 0, b = 1;
        int c;
        while (n != 1) {
            c = a + b;
            a=b;
            b=c;
            n--;
            fibonacci(n);
        }
        return c;
    }
 
int main()
{   
    cout << fibonacci(1);
    
    return 0;
} 