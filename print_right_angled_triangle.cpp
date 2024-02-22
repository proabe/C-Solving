#include <iostream>
using namespace std;

void printRightAngledTriangle(int s){
    for (int i = 0; i < s; i++)
    {
        int j = 0;
        while (j < i+1) {
            if (i > 1 && i < s-1 && j > 0 && j < i){
                cout << "   ";
            } else {
                cout << "*  ";
            }
            j++;
        }
        cout << "\n";
    }
}

int main() {
    int size;
    cin >> size;
    printRightAngledTriangle(size);
    return 0;
}