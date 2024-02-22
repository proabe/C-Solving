#include <iostream>
using namespace std;

void printSqaure(int s){
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {   
            if (i > 0 && j >0 && j< s-1 && i < s-1)
            {   cout << "  ";
            } else{
                cout << "* ";
            }
        }
        cout << "\n";
    }
}

int main() {
    int size;
    cin >> size;
    printSqaure(size);
    return 0;
}